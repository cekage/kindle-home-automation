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

    This is unit test for lib/filter.c

    Compile : cc -Werror -Wall -ggdb -pedantic -std=c99 -lm test_filter.c -o  test_filter

    DEBUG : use (void)printf("\nTEST : azerty = %s : cmp = %d\n",azerty,cmp);

*/
#define _GNU_SOURCE
#include <stdio.h>
#include "greatest.h"
#include <limits.h>

#include "../lib/filter.h"

#define STR_UNTOUCHED "untouched"

/*
    Verify trivial usage, with no trap and with pointer as destination
    Wanted result : a string
*/
TEST substring_simple_ptr() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char* azerty;
    (void)extract_substring((const char**)&abcazerty, &azerty, '+', '=');
    cmp = strcmp(azerty, "azerty");
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

/*
    Verify trivial usage, with no trap and with array as destination
    Wanted result : a string
*/
TEST substring_simple_array() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char azerty[MAX_GETLINE + 1];
    char** myptr = (char**) &azerty;
    (void)extract_substring((const char**)&abcazerty, (char**) &myptr, '+', '=');
    cmp = strcmp((char*) myptr, "azerty");
    (void)printf("\nTEST : azerty = %s : cmp = %d\n", (char*) myptr, cmp);
    free(myptr);
    ASSERT_EQ(0, cmp);
    PASS();
}


/*
    Verify trivial usage, with inverted from/to
    Wanted result : untouched
*/
TEST substring_inverted() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char* azerty;
    asprintf(&azerty, STR_UNTOUCHED);
    (void)extract_substring((const char**)&abcazerty, &azerty, '=', '+');
    cmp = strcmp(azerty, STR_UNTOUCHED);
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

/*
    Verify trivial usage, with "from" absent of the searched string
    Wanted result : untouched
*/
TEST substring_missing_start() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char* azerty;
    asprintf(&azerty, STR_UNTOUCHED);
    (void)extract_substring((const char**)&abcazerty, &azerty, '@', '=');
    cmp = strcmp(azerty, STR_UNTOUCHED);
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

/*
    Verify trivial usage, with "to" absent of the searched string
    Wanted result : untouched
*/
TEST substring_missing_end() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char* azerty;
    asprintf(&azerty, STR_UNTOUCHED);
    (void)extract_substring((const char**)&abcazerty, &azerty, '+', '@');
    cmp = strcmp(azerty, STR_UNTOUCHED);
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

/*
    Verify trivial usage, with a NULL searched string
    Wanted result : untouched
*/
TEST substring_string_null() {
    const char* abcazerty = NULL;
    int cmp;
    char* azerty = NULL;
    asprintf(&azerty, STR_UNTOUCHED);
    (void)extract_substring((const char**)&abcazerty, &azerty, '+', '@');
    cmp = strcmp(azerty, STR_UNTOUCHED);
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}


/*
    Verify trivial usage, with an empty searched string
    Wanted result : untouched
*/
TEST substring_string_empty() {
    const char* abcazerty = "";
    int cmp;
    char* azerty = NULL;
    asprintf(&azerty, STR_UNTOUCHED);
    (void)extract_substring((const char**)&abcazerty, &azerty, '+', '@');
    cmp = strcmp(azerty, STR_UNTOUCHED);
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

/*
    Verify trivial usage, with from and to contiguous
    Wanted result : empty string
*/
TEST substring_string_contiguous() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char* azerty = NULL;
    (void)extract_substring((const char**)&abcazerty, &azerty, '+', 'a');
    cmp = strcmp(azerty, "");
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

SUITE(suite_substring) {
    RUN_TEST(substring_string_contiguous);
    RUN_TEST(substring_simple_array);
    RUN_TEST(substring_simple_ptr);
    RUN_TEST(substring_inverted);
    RUN_TEST(substring_missing_start);
    RUN_TEST(substring_missing_end);
    RUN_TEST(substring_string_empty);
    RUN_TEST(substring_string_null);
}

/*
    Verify trivial usage
    Wanted result : ptr to the first end after to
*/
TEST return_substring_simple() {
    const char* abcazerty = "ab=c+azerty=1";
    int cmp;
    char* azerty = NULL;
    char* result = extract_substring((const char**)&abcazerty, &azerty, '+', '=');
    cmp = strcmp(result, "=1");
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}


/*  Verify trivial usage
    Wanted result : ptr to the first end after to
*/
TEST return_substring_missing() {
    const char* abcazerty = "abc+azerty=1";
    char* azerty = NULL;
    char* result = extract_substring((const char**)&abcazerty, &azerty, 'x', 'x');
    ASSERT_EQ(NULL, result);
    free(result);
    PASS();
}

TEST return_substring_identical() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char* azerty = NULL;
    char* result = extract_substring((const char**)&abcazerty, &azerty, 'a', 'a');
    cmp = strcmp(result, "azerty=1");
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

TEST return_substring_contiguous() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char* azerty = NULL;
    char* result = extract_substring((const char**)&abcazerty, &azerty, 't', 'y');
    cmp = strcmp(result, "y=1");
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

TEST return_substring_nostart() {
    const char* abcazerty = "abc+azerty=1";
    char* azerty = NULL;
    char* result = extract_substring((const char**)&abcazerty, &azerty, '@', 'y');
    ASSERT_EQ(NULL, result);
    free(azerty);
    PASS();
}
TEST return_substring_noend() {
    const char* abcazerty = "abc+azerty=1";
    char* azerty = NULL;
    char* result = extract_substring((const char**)&abcazerty, &azerty, 'e', '@');
    ASSERT_EQ(NULL, result);
    free(azerty);
    PASS();
}

SUITE(suite_return_substring) {
    RUN_TEST(return_substring_simple);
    RUN_TEST(return_substring_missing);
    RUN_TEST(return_substring_identical);
    RUN_TEST(return_substring_contiguous);
    RUN_TEST(return_substring_nostart);
    RUN_TEST(return_substring_noend);
}

/* Add definitions that need to be in the test runner's main file. */
GREATEST_MAIN_DEFS();

int main(int argc, char** argv) {
    GREATEST_MAIN_BEGIN();      /* command-line arguments, initialization. */
    RUN_SUITE(suite_substring);
    RUN_SUITE(suite_return_substring);
    GREATEST_MAIN_END();        /* display results */
}
