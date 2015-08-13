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

    This is a basis for filters. See filter_cvm as an example.
*/

#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <regex.h>
#include <sys/param.h>

#ifndef FILTER_H
#define FILTER_H
#endif

#ifndef S_SPLINT_S
#endif

bool check_regexp(const char** line, const char** filter);
char* extract_substring(const char** src, char** dst,
                        const char key_start, const char key_stop);

bool check_regexp(const char** line, const char** filter) {
    // Big waste of time, don't forget checkMAGIC before !!
    int reg_result;
    regex_t regex;
    reg_result = regcomp(&regex, *filter, REG_EXTENDED);
    if (0 !=  reg_result) {
        perror("Could not compile regex");
        exit(EXIT_FAILURE);
    }
    reg_result = regexec(&regex, *line, 0, NULL, 0);
    regfree(&regex);
    return 0 == reg_result;
}

char* extract_substring(const char** src, char** dst,
                        const char key_start, const char key_stop) {
    char* result = NULL;
    if ( NULL != *src) {
        char* cursor_start;
        // Searching key_start in src
        cursor_start = strchr(*src, key_start);
        if ( NULL != cursor_start ) {
            // Ok, cursor_start is in src and we point it
            char* cursor_end;
            // inc cursort_start to be sure cursor_end will be superior
            ++cursor_start;
            // Searching key_stop in src
            cursor_end = strchr(cursor_start, key_stop);
            if ( NULL != cursor_end ) {
                // Ok, cursor_end is in src and we point it
                int asprint_ret;      // return of asprint
                size_t cursor_length; // get the size of the inter-key word.
                cursor_length = cursor_end - cursor_start;
                //~ (void)printf("\nstart:[%s] end:[%s] size:[%zu]\n",
                //~ cursor_start, cursor_end, cursor_length);
                //~ ** dst = '\0';  // emptying the destination string before filling it.
                //~ strncat(*dst, cursor_start, MIN(cursor_length, MAX_GETLINE));
                asprint_ret = asprintf((char** restrict) dst, "%s", cursor_start);
                if (-1 != asprint_ret) {
                    // No error occurs during asprintf so let truncate dst.
                    // It's possible to truncate during asprintf by using %.Xs
                    // but X is not predictible and needs more string manipulation.
                    *(*dst + cursor_length) = '\0';
                    // asprint + cutting dst after cursor_length bytes is more
                    // efficient on the kindle than calloc+strncat  ¯\_(ツ)_/¯
                    result = cursor_end;
                }
            }
        }
    }
    return result;
}
