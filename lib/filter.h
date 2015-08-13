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

#define MAX_GETLINE 200

#ifndef S_SPLINT_S
// splint doesn't like static in array declaration…
#define STATIC_MAXGETLINE static MAX_GETLINE+1
#else
#define STATIC_MAXGETLINE
#endif

bool check_regexp(const char* line[STATIC_MAXGETLINE],
                  const char* regexp[STATIC_MAXGETLINE]);
char* extract_substring(const char** src, char** dst, const char key_start,
                        const char key_stop);

bool check_regexp(const char* line[STATIC_MAXGETLINE],
                  const char* filter[STATIC_MAXGETLINE]) {
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

char* extract_substring(const char** src, char** dst, const char key_start,
                        const char key_stop) {
    char* result = NULL;
    if ( NULL != *src) {
        char* cursor_start;
        cursor_start = strchr(*src, key_start);
        if ( NULL != cursor_start ) {
            char* cursor_end;
            ++cursor_start;
            cursor_end = strchr(cursor_start, key_stop);
            if ( NULL != cursor_end ) {
                int asprint_ret;
                size_t cursor_length; // get the size of the inter-key word.
                cursor_length = cursor_end - cursor_start;
                //~ (void)printf("\nstart:[%s] end:[%s] size:[%zu]\n",
                             //~ cursor_start, cursor_end, cursor_length);
                //~ ** dst = '\0';  // emptying the destination string before filling it.
                //~ strncat(*dst, cursor_start, MIN(cursor_length, MAX_GETLINE));
                asprint_ret = asprintf((char** restrict) dst, "%s", cursor_start);
                if (-1 != asprint_ret) {
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
