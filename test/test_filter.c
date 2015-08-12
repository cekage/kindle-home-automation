// TODO SPLIT soc  and conversion

#include "greatest.h"
#include <limits.h>
#include "../lib/filter.h"

TEST simple_substring_ptr() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char* azerty = calloc(1,MAX_GETLINE + 1);
    (void)extract_substring((const char**)&abcazerty, &azerty, '+', '=');
    cmp = strcmp(azerty, "azerty");
    //~ (void)printf("\nTEST : azerty = %s : cmp = %d\n",azerty,cmp);
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

TEST simple_substring_array() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char azerty[MAX_GETLINE + 1];
    char** myptr = (char**) &azerty;
    (void)extract_substring((const char**)&abcazerty, (char**) &myptr, '+', '=');
    cmp = strcmp(azerty, "azerty");
    ASSERT_EQ(0, cmp);
    PASS();
}

TEST inverted_substring() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char* azerty = calloc(1,MAX_GETLINE + 1);
    (void)extract_substring((const char**)&abcazerty, &azerty, '=', '+');
    cmp = strcmp(azerty, "");
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

TEST missing_start_substring() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char* azerty = calloc(1,MAX_GETLINE + 1);
    (void)extract_substring((const char**)&abcazerty, &azerty, '@', '=');
    cmp = strcmp(azerty, "");
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

TEST missing_end_substring() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char* azerty = calloc(1,MAX_GETLINE + 1);
    (void)extract_substring((const char**)&abcazerty, &azerty, '+', '@');
    cmp = strcmp(azerty, "");
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

TEST null_string_substring() {
    const char* abcazerty = NULL;
    int cmp;
    char* azerty = calloc(1,MAX_GETLINE + 1);
    (void)extract_substring((const char**)&abcazerty, &azerty, '+', '@');
    cmp = strcmp(azerty, "");
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

TEST contiguous_string_substring() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char* azerty = calloc(1,MAX_GETLINE + 1);
    (void)extract_substring((const char**)&abcazerty, &azerty, '+', 'a');
    cmp = strcmp(azerty, "");
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

SUITE(suite_substring) {
    RUN_TEST(simple_substring_ptr);
    RUN_TEST(simple_substring_array);
    RUN_TEST(inverted_substring);
    RUN_TEST(missing_start_substring);
    RUN_TEST(missing_end_substring);
    RUN_TEST(null_string_substring);
    RUN_TEST(contiguous_string_substring);
    RUN_TEST(contiguous_string_substring);
}

TEST return_substring_simple() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char* azerty = calloc(1,MAX_GETLINE + 1);
    char* result = extract_substring((const char**)&abcazerty, &azerty, '+', '=');
    cmp = strcmp(result, "=1");
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

TEST return_substring_missing() {
    const char* abcazerty = "abc+azerty=1";
    char* azerty = calloc(1,MAX_GETLINE + 1);
    char* result = extract_substring((const char**)&abcazerty, &azerty, 'x', 'x');
    ASSERT_EQ(NULL, result);
    free(azerty);
    PASS();
}

TEST return_substring_identical() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char* azerty = calloc(1,MAX_GETLINE + 1);
    char* result = extract_substring((const char**)&abcazerty, &azerty, 'a', 'a');
    cmp = strcmp(result, "azerty=1");
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

TEST return_substring_contiguous() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char* azerty = calloc(1,MAX_GETLINE + 1);
    char* result = extract_substring((const char**)&abcazerty, &azerty, 't', 'y');
    cmp = strcmp(result, "y=1");
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

TEST return_substring_nostart() {
    const char* abcazerty = "abc+azerty=1";
    char* azerty = calloc(1,MAX_GETLINE + 1);
    char* result = extract_substring((const char**)&abcazerty, &azerty, '@', 'y');
    ASSERT_EQ(NULL, result);
    free(azerty);
    PASS();

}
TEST return_substring_noend() {
    const char* abcazerty = "abc+azerty=1";
    char* azerty = calloc(1,MAX_GETLINE + 1);
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
