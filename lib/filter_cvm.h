/*
            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                   Version 2, December 2004

    Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>

    Everyone is permitted to copy and distribute verbatim or modified
    copies of this license document, and changing it is allowed as long
    as the name is changed.

           DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
    TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

    0. You just DO WHAT THE FUCK YOU WANT TO.

    Illustrate filter.h, in this example we first check "cvm" by MAGIC
    then check "Suppleme"ntarInfoBox by MAGIC too.

    Then filters with a expensive regex (which can be avoided in fact)
    and then (for example) extracts room / asin from SupplementarInfoBox

    Don't forget, enabling cvm log in read_fifo needs that syslog-ng
    redirects cvm log to read_fifo.
    In a certain way, read_fifo can really handle all your logs, not only
    cvm and powerd or other provided with this program.

*/

#define _GNU_SOURCE

#include <stdio.h>
#include <inttypes.h>  // for PRIx64 stuff

#ifndef FILTER_H
#include "filter.h"
#endif

#ifndef HTMLREQUEST_H
#include "./htmlrequest.h"
#endif

// in string : 'cvm['
#define MAGIC_CVM  0x5b6d7663

void process_SupplementarInfoBox(const char** line);

void process_BookletManager(const char** line);



/* *****************************   SupplementarInfoBox    ******************************** */

void process_SupplementarInfoBox(const char** line) {
    // in string : 'Suppleme'
    const uint64_t MAGIC = 0x656d656c70707553;
    if (strlen(*line) > 4 &&
            check_MAGIC_32_64(line, MAGIC_CVM, MAGIC)) {
        const char* regexp_for_log =
            "SupplementarInfoBox:QUICK_LOOKUP:asin=(.+),word=(.+):$";
        char* room;
        char* asin;
        if (check_regexp_va(line, &regexp_for_log,
                            PREFIX_WITH_COUNT(&asin, &room))) {
            char* url_request = NULL;
            if (-1 != asprintf(&url_request, "?toggle=%s", room)) {
                do_http_request(url_request);
                free(url_request);
            } else {
                perror("process_SupplementarInfoBox() can't build url_request");
            }
            free(asin);
            free(room);
        }
    }
}

/* *****************************   BookletManager    ******************************** */

void process_BookletManager(const char** line) {
    // in string : 'BookletM'
    const uint64_t MAGIC = 0x4d74656c6b6f6f42;
    if (strlen(*line) > 47 &&
            check_MAGIC_32_64(line, MAGIC_CVM, MAGIC)) {
        const char* regexp_for_log =
            "BookletManager:SwitchingBooklets:from=(.+),to=(.+):$";
        char* from;
        char* to;
        if (check_regexp_va(line, &regexp_for_log,
                            PREFIX_WITH_COUNT(&from, &to))) {
            char* url_request = NULL;
            if (-1 != asprintf(&url_request, "?from=%s&to=%s", from, to)) {
                do_http_request(url_request);
                free(url_request);
            } else {
                perror("process_BookletManager() can't build url_request");
            }
            free(from);
            free(to);
        }
    }
}

/* *****************************   Garbage  ¯\_(ツ)_/¯   ******************************** */

/*
    //~ Old version with array instead of pointer.
    void process_SupplementarInfoBox(const char* line[STATIC_MAXGETLINE]) {
    if (strlen(*line) > 4 && check_MAGIC_SupplementarInfoBox(line)) {
        if (check_regexp_for_log(line)) {
            char room[MAX_GETLINE + 1];
            char asin[MAX_GETLINE + 1];
            // I did'nt manage to pass asin & room as parameters to extractdata_
            // SupplementarInfoBox(). If you know how to do that, ping me please !
            char** proom = (char**) &room;
            char** pasin = (char**) &asin;
            //~ (void)printf("process_SupplementarInfoBox() with %s\n", *line);
            // Better use  size_t nmatch / regmatch_t pmatch…
            //~ (void)printf("[%zu] : **>%s<**\n", strlen(*line), *line);
            extractdata_SupplementarInfoBox(line, (char**) &pasin, (char**) &proom);
            //~ (void)printf("  \\_____ match : asin=%s /", asin);
            //~ (void)printf(" word=%s", room);
            //~ (void)printf("\n");
            //~ do_http_request(room);
        }
    }
    }
*/
