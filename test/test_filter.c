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
    Be carefull of freeing ptr after usage.
*/
TEST substring_simple_array() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char azerty[100 + 1];
    char** myptr = (char**) &azerty;
    (void)extract_substring((const char**)&abcazerty, (char**) &myptr, '+', '=');
    cmp = strcmp((char*) myptr, "azerty");
    free(myptr);
    ASSERT_EQ(0, cmp);
    PASS();
}

/*
    Verify trivial usage, with inverted key_end/key_start
    Wanted result : untouched
*/
TEST substring_inverted() {
    const char* abcazerty = "abc+azerty=1";
    int cmp;
    char* azerty;
    (void)asprintf(&azerty, STR_UNTOUCHED);
    (void)extract_substring((const char**)&abcazerty, &azerty, '=', '+');
    cmp = strcmp(azerty, STR_UNTOUCHED);
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

/*
    Verify with key_start absent of the searched string
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
    Verify trivial usage, with key_end absent of the searched string
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
    Verify trivial usage, with key_start and key_end contiguous
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
    Verify function takes the right key_end when is multiple times in src.
    Wanted result : ptr to the first key_end after key_start
*/
TEST return_substring_simple() {
    const char* abcazerty = "ab=c+azerty=1=4";
    int cmp;
    char* azerty = NULL;
    char* result = extract_substring((const char**)&abcazerty, &azerty, '+', '=');
    cmp = strcmp(result, "=1=4");
    free(azerty);
    ASSERT_EQ(0, cmp);
    PASS();
}

/*
    Verify behavior when both key_start and key_stop are missing.
    Wanted result : NULL
*/
TEST return_substring_missing() {
    const char* abcazerty = "abc+azerty=1";
    char* azerty = NULL;
    char* result = extract_substring((const char**)&abcazerty, &azerty, 'x', 'x');
    ASSERT_EQ(NULL, result);
    free(result);
    PASS();
}

/*
    Verify behavior when key_start & key_end are identical
    Wanted result : ptr to the first key_end after the first Key_start
*/
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

/*
    Verify behavior when key_start is immediatly followed by key_end
    Wanted result : ptr to the first key_end after the first Key_start
*/
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

/*
    Verify behavior when key_start did'nt exist in source but key_end is in.
    Wanted result : NULL
*/
TEST return_substring_nostart() {
    const char* abcazerty = "abc+azerty=1";
    char* azerty = NULL;
    char* result = extract_substring((const char**)&abcazerty, &azerty, '@', 'y');
    ASSERT_EQ(NULL, result);
    free(azerty);
    PASS();
}

/*
    Verify behavior when key_start exists but key_end is missing.
    Wanted result : NULL
*/
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

/*
    Verify normal behavior.
    Wanted result : value1 and value2 with expected values.
*/
TEST extract_data2_normal() {
    const char* fakelog = "daemon[pid]: X BlahBlahEngine:key1=value1,key2=value2:";
    char* value1 = NULL;
    char* value2 = NULL;
    int cmp;
    extractdata_only_2_keys(&fakelog, &value1, &value2);
    cmp = strcmp(value1, "value1");
    ASSERT_EQ(0, cmp);
    cmp = strcmp(value2, "value2");
    ASSERT_EQ(0, cmp);
    free(value2);
    free(value1);
    PASS();
}

/*
    Verify behavior if last colon is missing.
    Wanted result : value1 correct and value2 untouched (so NULL);
*/
TEST extract_data2_missing_end_colon() {
    const char* fakelog = "daemon[pid]: X BlahBlahEngine:key1=value1,key2=value2";
    char* value1 = NULL;
    char* value2 = NULL;
    int cmp;
    extractdata_only_2_keys(&fakelog, &value1, &value2);
    cmp = strcmp(value1, "value1");
    ASSERT_EQ(0, cmp);
    free(value1);
    ASSERT_EQ(NULL, value2);
    free(value2);
    PASS();
}

/*
    Verify behavior if there is more than expected values
    Wanted result : first key ok, second key contains excessive characters.
*/
TEST extract_data2_excessive_keys() {
    const char* fakelog =
        "daemon[pid]: X BlahBlahEngine:key1=value1,key2=value2,key3=value3:";
    char* value1 = NULL;
    char* value2 = NULL;
    int cmp;
    extractdata_only_2_keys(&fakelog, &value1, &value2);
    cmp = strcmp(value1, "value1");
    ASSERT_EQ(0, cmp);
    free(value1);
    cmp = strcmp(value2, "value2,key3=value3");
    ASSERT_EQ(0, cmp);
    free(value2);
    PASS();
}

/*
    Verify behavior if there is not enough key=value.
    Wanted result : both value1 and value2 equals NULL
*/
TEST extract_data2_not_enough_keys() {
    const char* fakelog = "daemon[pid]: X BlahBlahEngine:key1=value1:";
    char* value1 = NULL;
    char* value2 = NULL;
    extractdata_only_2_keys(&fakelog, &value1, &value2);
    ASSERT_EQ(NULL, value1);
    ASSERT_EQ(NULL, value2);
    PASS();
}

/*
    Verify behavior if there is not enough key=value
    Wanted result : both value1 and value2 equals NULL
*/
TEST extract_data2_not_enough_keys_but_unstructured_comment() {
    const char* fakelog =
        "daemon[pid]: X BlahBlahEngine:key1=value1,Weird Comment -> Like ScreenSaver:";
    char* value1 = NULL;
    char* value2 = NULL;
    int cmp;
    extractdata_only_2_keys(&fakelog, &value1, &value2);
    cmp = strcmp(value1, "value1");
    ASSERT_EQ(0, cmp);
    free(value1);
    ASSERT_EQ(NULL, value2);
    PASS();
}


/*
    Verify normal behavior.
    Wanted result : value1, value2 and value3 with expected values.
*/
TEST extract_data3_normal() {
    const char* fakelog =
        "daemon[pid]: X BlahBlahEngine:key1=value1,key2=value2,key3=value3:";
    char* value1 = NULL;
    char* value2 = NULL;
    char* value3 = NULL;
    int cmp;
    extractdata_only_3_keys(&fakelog, &value1, &value2, &value3);
    cmp = strcmp(value1, "value1");
    free(value1);
    ASSERT_EQ(0, cmp);
    cmp = strcmp(value2, "value2");
    free(value2);
    ASSERT_EQ(0, cmp);
    cmp = strcmp(value3, "value3");
    free(value3);
    ASSERT_EQ(0, cmp);
    PASS();
}

/*
    Verify behavior if last colon is missing.
    Wanted result : value1 & value2 correct and value3 untouched (so NULL);
*/
TEST extract_data3_missing_end_colon() {
    const char* fakelog =
        "daemon[pid]: X BlahBlahEngine:key1=value1,key2=value2,key3=value3";
    char* value1 = NULL;
    char* value2 = NULL;
    char* value3 = NULL;
    int cmp;
    extractdata_only_3_keys(&fakelog, &value1, &value2, &value3);
    cmp = strcmp(value1, "value1");
    free(value1);
    ASSERT_EQ(0, cmp);
    cmp = strcmp(value2, "value2");
    free(value2);
    ASSERT_EQ(0, cmp);
    ASSERT_EQ(NULL, value3);
    PASS();
}

/*
    Verify behavior if there is more than expected values
    Wanted result : value1 & value2 ok, value3 contains excessive characters.
*/
TEST extract_data3_excessive_keys() {
    const char* fakelog =
        "daemon[pid]: X BlahBlahEngine:key1=value1,key2=value2,key3=value3,key4=value4:";
    char* value1 = NULL;
    char* value2 = NULL;
    char* value3 = NULL;
    int cmp;
    extractdata_only_3_keys(&fakelog, &value1, &value2, &value3);
    cmp = strcmp(value1, "value1");
    ASSERT_EQ(0, cmp);
    free(value1);
    cmp = strcmp(value2, "value2");
    ASSERT_EQ(0, cmp);
    free(value2);
    cmp = strcmp(value3, "value3,key4=value4");
    ASSERT_EQ(0, cmp);
    free(value3);
    PASS();
}

/*
    Verify behavior if there is not enough key=value.
    Wanted result : value1, value2 and value3 equals NULL
*/
TEST extract_data3_not_enough_keys() {
    const char* fakelog = "daemon[pid]: X BlahBlahEngine:key1=value1:";
    char* value1 = NULL;
    char* value2 = NULL;
    char* value3 = NULL;
    extractdata_only_3_keys(&fakelog, &value1, &value2, &value3);
    ASSERT_EQ(NULL, value1);
    ASSERT_EQ(NULL, value2);
    ASSERT_EQ(NULL, value3);
    PASS();
}

/*
    Verify behavior if there is not enough key=value
    Wanted result : both value1 and value2 equals NULL
*/
TEST extract_data3_not_enough_keys_but_unstructured_comment() {
    const char* fakelog =
        "daemon[pid]: X BlahBlahEngine:key1=value1,key2=value2,Weird Comment -> Like ScreenSaver:";
    char* value1 = NULL;
    char* value2 = NULL;
    char* value3 = NULL;
    int cmp;
    extractdata_only_3_keys(&fakelog, &value1, &value2, &value3);
    cmp = strcmp(value1, "value1");
    ASSERT_EQ(0, cmp);
    free(value1);
    cmp = strcmp(value2, "value2");
    ASSERT_EQ(0, cmp);
    free(value2);
    ASSERT_EQ(NULL, value3);
    PASS();
}

SUITE(suite_extract_data) {
    RUN_TEST(extract_data2_normal);
    RUN_TEST(extract_data2_missing_end_colon);
    RUN_TEST(extract_data2_excessive_keys);
    RUN_TEST(extract_data2_not_enough_keys);
    RUN_TEST(extract_data2_not_enough_keys_but_unstructured_comment);
    RUN_TEST(extract_data3_normal);
    RUN_TEST(extract_data3_missing_end_colon);
    RUN_TEST(extract_data3_excessive_keys);
    RUN_TEST(extract_data3_not_enough_keys);
    RUN_TEST(extract_data3_not_enough_keys_but_unstructured_comment);
}

/*
    Verify behavior true 32 & 64 magic
    Wanted result : true
*/
TEST magic_32_64_normal() {
    const char* fakelog =
        "lmao[1234]: X BlahBlahEngine:key1=value1,key2=value2,Weird Comment -> Like ScreenSaver:";
    /*
        Python hint to calculate MAGIC 64 :
                for b in reversed("BlahBlahEngine"[0:8]):print("%x" % ord(b), end="")
        ---> 68616c4268616c42.
    */
    uint32_t magiclmao = 0x6f616d6c;
    uint64_t magicblahblah = 0x68616c4268616c42;
    bool result = check_MAGIC_32_64(&fakelog, magiclmao, magicblahblah);
    ASSERT_EQ(true, result);
    PASS();
}

/*
    Verify behavior bad 32 & true 64 magic
    Wanted result : false
*/
TEST magic_32_64_bad32() {
    const char* fakelog =
        "lmao[1234]: X BlahBlahEngine:key1=value1,key2=value2,Weird Comment -> Like ScreenSaver:";
    uint32_t magiclmao = 0xdeadbeef;
    uint64_t magicblahblah = 0x68616c4268616c42;
    bool result = check_MAGIC_32_64(&fakelog, magiclmao, magicblahblah);
    ASSERT_EQ(false, result);
    PASS();
}

/*
    Verify behavior true 32 & bad 64 magic
    Wanted result : false
*/
TEST magic_32_64_bad64() {
    const char* fakelog =
        "lmao[1234]: X BlahBlahEngine:key1=value1,key2=value2,Weird Comment -> Like ScreenSaver:";
    uint32_t magiclmao = 0x6f616d6c;
    uint64_t magicblahblah = 0xdeadbeefdeadbabe;
    bool result = check_MAGIC_32_64(&fakelog, magiclmao, magicblahblah);
    ASSERT_EQ(false, result);
    PASS();
}

/*
    Verify behavior when log is not enough to be uint64_t
    Wanted result : false
*/
TEST magic_32_64_not_enough_log() {
    const char* fakelog = "x[1]: W Nothing";
    uint32_t magiclmao = 0x6f616d6c;
    uint64_t magicblahblah = 0xdeadbeefdeadbabe;
    bool result = check_MAGIC_32_64(&fakelog, magiclmao, magicblahblah);
    ASSERT_EQ(false, result);
    PASS();
}

/*
    Verify behavior true 32 & 64 magic
    Wanted result : true
*/
TEST magic_32_64_masked_normal() {
    const char* fakelog =
        "bw[s234]: X Example:key1=value1,key2=value2,Weird Comment -> Like ScreenSaver:";
    uint32_t magicbw = 0x115b7762; // bw[s
    uint32_t maskbw =  0x00ffffff; // only the 3 first chars matter
    uint64_t magicexample = 0x3a656c706d617845; // 'Example:'
    uint64_t maskexample =  0x00ffffffffffffff; // suppress the colon
    bool result;
    result = check_MAGIC_32_64_masked(&fakelog,
                                      magicbw, maskbw, magicexample, maskexample);
    ASSERT_EQ(true, result);
    PASS();
}

/*
    Verify behavior true 64 & 64 magic
    Wanted result : true
*/
TEST magic_64_64_masked_normal() {
    const char* fakelog =
        "bw[s234]: X Example:key1=value1,key2=value2,Weird Comment -> Like ScreenSaver:";
    uint32_t magicbw = 0x115b7762; // bw[s
    uint32_t maskbw =  0x00ffffff; // only the 3 first chars matter
    uint64_t magicexample = 0x3a656c706d617845; // 'Example:'
    uint64_t maskexample =  0x00ffffffffffffff; // suppress the colon
    bool result;
    result = check_MAGIC_64_64_masked(&fakelog,
                                      magicbw, maskbw, magicexample, maskexample);
    ASSERT_EQ(true, result);
    PASS();
}


SUITE(suite_check_magic) {
    RUN_TEST(magic_32_64_normal);
    RUN_TEST(magic_32_64_bad32);
    RUN_TEST(magic_32_64_bad64);
    RUN_TEST(magic_32_64_not_enough_log);
    RUN_TEST(magic_32_64_masked_normal);
    RUN_TEST(magic_64_64_masked_normal);
}

/* Add definitions that need to be in the test runner's main file. */
GREATEST_MAIN_DEFS();

int main(int argc, char** argv) {
    GREATEST_MAIN_BEGIN();      /* command-line arguments, initialization. */
    RUN_SUITE(suite_substring);
    RUN_SUITE(suite_return_substring);
    RUN_SUITE(suite_extract_data);
    RUN_SUITE(suite_check_magic);
    GREATEST_MAIN_END();        /* display results */
}
