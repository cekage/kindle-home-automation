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

    This is a basis for filters. See filter_cvm / filter_powerd as an example.
*/

#define _GNU_SOURCE
#include <inttypes.h>  // for PRIx64 stuff

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <regex.h>
#include <sys/param.h>
#include <stdarg.h>  // for var args

#ifndef FILTER_H
#define FILTER_H
#endif

#ifndef S_SPLINT_S
#endif

// Thanks to http://efesx.com/2010/07/17/variadic-macro-to-count-number-of-arguments/
#define PREFIX_WITH_COUNT(...) VA_NUM_ARGS_IMPL(0, ## __VA_ARGS__, 5,4,3,2,1,0),__VA_ARGS__
#define VA_NUM_ARGS_IMPL(_0,_1,_2,_3,_4,_5,N,...) N

/* ************** PROTO  ****************** */

bool heck_regexp_va(const char** line, const char** filter,
                    size_t amount, char** wanted_values, ...);
bool check_regexp(const char** line, const char** filter);
char* extract_substring(const char** src, char** dst,
                        const char key_start, const char key_stop);
bool check_MAGIC_32_64(const char** line,
                       const uint32_t magic32, const uint64_t magic64);
bool check_MAGIC_32_64_masked(const char** line,
                              const uint32_t magic32, const uint32_t mask32,
                              const uint64_t magic64, const uint64_t mask64);
bool check_MAGIC_64_64_masked(const char** line,
                              const uint64_t magic1, const uint64_t mask1,
                              const uint64_t magic2, const uint64_t mask2);
void extractdata_only_2_keys(const char** line,
                             char** key1, char** key2);
void extractdata_only_3_keys(const char** line, char** key1,
                             char** key2, char** key3);



bool check_regexp_va(const char** line, const char** filter,
                     const size_t amount, char** wanted_values, ...) {
    // Big waste of time, don't forget checkMAGIC before !!
    int reg_result;
    regex_t regex;
    regmatch_t pmatch[amount + 1];
    memset(&pmatch, 0, sizeof(regmatch_t) * (amount + 1));
    reg_result = regcomp(&regex, *filter, REG_EXTENDED);
    if (0 !=  reg_result) {
        perror("Could not compile regex");
        exit(EXIT_FAILURE);
    }
    reg_result = regexec(&regex, *line, amount + 1 ,
                         pmatch, 0);
    if (REG_NOMATCH != reg_result) {
        char* linecopy;
        if (-1 != asprintf(&linecopy, "%s", *line)) {
            va_list argp;
            char** value;
            size_t i;
            va_start(argp, wanted_values);
            value = wanted_values;
            for (i = 1; i <= amount && pmatch[i].rm_so > 0; ++i) {
                // Terminate the string (on the _copy_ of log line)
                *(linecopy + pmatch[i].rm_eo) = '\0';
                // if it fails, value will be null
                (void)asprintf((char** restrict) value, "%s", linecopy + pmatch[i].rm_so);
                // Get the next value,
                value = va_arg(argp, char**);
            }
            va_end(argp);
            free(linecopy);
        }
    }
    regfree(&regex);
    return 0 == reg_result;
}

bool check_MAGIC_32_64(const char** line,
                       const uint32_t magic32, const uint64_t magic64) {
    return check_MAGIC_64_64_masked(line, magic32, 0xFFFFFFFF,
                                    magic64, 0xFFFFFFFFFFFFFFFF);
}


bool check_MAGIC_64_64_masked(const char** line,
                              const uint64_t magic1, const uint64_t mask1,
                              const uint64_t magic2, const uint64_t mask2) {
    bool result = false;
    //~ (void)printf("cmp %lx to %lx\n",magic1 & mask1,*((unsigned long*) *line)& mask1);
    if ((magic1 & mask1) == (*((uint64_t*) *line)& mask1)) {
        //~ (void)printf("magic1/mask1 is ok\n");
        char* cursor;
        // MAGIC is 4 chars after the colon "prog.*[pid]: . MAGIC64?.*"
        cursor = strchr(*line, ':') + 4;
        //~ (void)printf("\OKx %"PRIx64" vs %"PRIx64" ",
        //~ (uint64_t) *line, magic64 );
        result = ((magic2 & mask2) == (*((uint64_t*) cursor) & mask2));
    }
    return result;
}



/* ************* deprecated ************** */

bool check_MAGIC_32_64_masked(const char** line,
                              const uint32_t magic32, const uint32_t mask32,
                              const uint64_t magic64, const uint64_t mask64) {
    bool result = false;
    perror("check_MAGIC_32_64_masked deprecated. use check_MAGIC_64_64_masked()");
    //~ (void)printf("cmp %lx to %lx\n", magic1 & mask1,
    //~ *((unsigned long*) *line)& mask1);
    if ((magic32 & mask32) == (*((uint32_t*) *line)& mask32)) {
        char* cursor;
        // MAGIC is 4 chars after the colon "prog.*[pid]: . MAGIC64?.*"
        cursor = strchr(*line, ':') + 4;
        //~ (void)printf("\OKx %"PRIx64" vs %"PRIx64" ",
        //~ (uint64_t) *line, magic64 );
        result = ((magic64 & mask64) == (*((uint64_t*) cursor) & mask64));
    }
    return result;
}


bool check_regexp(const char** line, const char** filter) {
    // Big waste of time, don't forget checkMAGIC before !!
    int reg_result;
    regex_t regex;
    perror("check_regexp() is deprecated, use check_regexp_va()");
    reg_result = regcomp(&regex, *filter, REG_EXTENDED);
    if (0 !=  reg_result) {
        perror("Could not compile regex");
        exit(EXIT_FAILURE);
    }
    reg_result = regexec(&regex, *line, 0, NULL, 0);
    regfree(&regex);
    return 0 == reg_result;
}

void extractdata_only_2_keys(const char** line,
                             char** key1, char** key2) {
    char* lastcursor = (char*) *line;  // lastcursor point to first char of line
    perror("extractdata_only_2_keys is deprecated, use check_regexp_va()");
    /*
        According to doc, and relying on RegExp, we first extract key1 starting from
        the beginnig on the line
    */
    lastcursor = extract_substring((const char**)&lastcursor, key1, '=', ',');
    // and then extract key2 from the last comma.
    (void)extract_substring((const char**) &lastcursor, key2, '=', ':');
    // Now key1 & key2 contains their value.
}

void extractdata_only_3_keys(const char** line, char** key1,
                             char** key2, char** key3) {
    char* lastcursor = (char*) *line;  // lastcursor point to first char of line
    perror("extractdata_only_3_keys is deprecated, use check_regexp_va()");
    /*
        According to doc, and relying on RegExp, we first extract key1 starting from
        the beginnig on the line
    */
    lastcursor = extract_substring((const char**) &lastcursor, key1, '=', ',');
    // and then extract key2 from the last comma.
    lastcursor = extract_substring((const char**) &lastcursor, key2, '=', ',');
    // and then extract key3 from the last comma.
    (void)extract_substring((const char**) &lastcursor, key3, '=', ':');
    // Now key1 & key2  & key3 contains their value.
}

char* extract_substring(const char** src, char** dst,
                        const char key_start, const char key_stop) {
    char* result = NULL;
    perror("cextract_substring() deprecated. use check_regexp_va()");
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
                asprint_ret = asprintf((char** restrict) dst, "%s", cursor_start);
                if (-1 != asprint_ret) {
                    /*
                        No error occurs during asprintf so let truncate dst.
                        It's possible to truncate during asprintf by using %.Xs
                        but X is not predictible and needs more string manipulation.
                    */
                    *(*dst + cursor_length) = '\0';
                    /*
                        asprint + cutting dst after cursor_length bytes is more
                        efficient on the kindle than calloc+strncat  ¯\_(ツ)_/¯
                    */
                    result = cursor_end;
                }
            }
        }
    }
    return result;
}
