#define _GNU_SOURCE
#include <stdio.h>
#include "greatest.h"

#include "../lib/htmlrequest.h"


TEST simple_test() {
    const char cuisine[]="?toggle=CUISINE";
    do_http_request(cuisine);
    PASS();
}

SUITE(suite_simple_test) {
    //~ RUN_TEST(x_should_equal_1);
    RUN_TEST(simple_test);
}


/* Add definitions that need to be in the test runner's main file. */
GREATEST_MAIN_DEFS();

int main(int argc, char** argv) {
    GREATEST_MAIN_BEGIN();      /* command-line arguments, initialization. */
    RUN_SUITE(suite_simple_test);
    GREATEST_MAIN_END();        /* display results */
}
