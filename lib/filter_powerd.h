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

    Illustrate filter.h, in this example we first check "powerd[" by MAGIC
    then check 'lipc:evt's by MAGIC too.

    For unit testing it may be a good idea to isolate all checks.

    Don't forget, enabling powerd log in read_fifo needs that syslog-ng
    redirects powerd log to read_fifo.
    In a certain way, read_fifo can really handle all your logs, not only
    cvm and powerd.

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


// in string : 'powerd['
#define MAGIC_POWERD  0x5b647265776f70

void process_lipcevts(const char** line);


/* *****************************   SupplementarInfoBox    ******************************** */

void process_lipcevts(const char** line) {
    // in string : 'lipc:evt's
    const uint64_t MAGIC = 0x7476653a6370696c;
    if (strlen(*line) > 4 &&
            check_MAGIC_64_64_masked(line,
                                     MAGIC_POWERD, 0x00FFFFFFFFFFFFFF,
                                     MAGIC, 0xFFFFFFFFFFFFFFFF)) {
        // Our regexp with parenthesis for substring delimitation
        const char* regexp_for_log =
            "lipc:evts:name=(.*), origin=(com.lab126.powerd), fparam=(.+):Event sent$";
        // Substring expected : must be null-ed.
        char* name = NULL;
        char* origin = NULL;
        char* fp = NULL;
        // Check and fill
        if (check_regexp_va(line, &regexp_for_log, 3, &name, &origin, &fp)) {
            char* url_request = NULL;
            if (-1 != asprintf(&url_request, "?screensaver=%s&fp=%s", name, fp)) {
                //~ (void)printf("url_request=%s\n",url_request);
                do_http_request(url_request);
                free(url_request);
            } else {
                perror("process_lipcevts() can't build url_request");
            }
            free(fp);
            free(origin);
            free(name);
        }
    }
}

void process_defbattinfo(const char** line) {
    // in string : 'lipc:evt's
    const uint64_t MAGIC = 0x747461623a666564;
    if (strlen(*line) > 100 &&
            check_MAGIC_64_64_masked(line,
                                     MAGIC_POWERD, 0x00FFFFFFFFFFFFFF,
                                     MAGIC, 0xFFFFFFFFFFFFFFFF)) {
        // Our regexp with parenthesis for substring delimitation
        const char* regexp_for_log =
            "def:battinfo:cap=(.+), mAh=(.+)mAh, volt=.+mV, current=.+mA, temp=.+F, bp=.+mV, lmd=.+mAh, cycl=(.+), cyct=.+:$";
        // Substring expected : must be null-ed and destroyed
        char* capacity = NULL;
        char* remain = NULL;
        char* cycle = NULL;
        // Check and fill
        if (check_regexp_va(line, &regexp_for_log, 3, &capacity, &remain, &cycle)) {
            char* url_request = NULL;
            if (-1 != asprintf(&url_request,
                               "battery.php?capacity=%s&cycle_number=%s&remainingmAh=%s",
                               capacity, cycle, remain)) {
                //~ (void)printf("url_request=%s\n",url_request);
                do_http_request(url_request);
                free(url_request);
            } else {
                perror("process_defbattinfo() can't build url_request");
            }
            free(cycle);
            free(remain);
            free(capacity);
        }
    }
}
