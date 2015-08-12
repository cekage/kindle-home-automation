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

Simple demo for filter_cvm

Build : cc -Werror -Wall -pedantic -std=c99 -O3 -lm read_fifo.c -o read_fifo
Post : strip --strip-unneeded read_fifo

*/

#define _GNU_SOURCE

#include "./lib/filter_cvm.h"
// Insert here future lib/filter_****.h file

// PROTO
static void get_stdin_line(void);


static void get_stdin_line(void) {
    ssize_t read;
    size_t len = 0;    // required for getline auto alloc mem
    char* line = NULL; //   idem
    // While return is not -1 then parse and proceed lines
    while (-1 != (read = getline(&line, &len, stdin))) {
        /* > 1 is a arbitray value, you can safely presume
         * that a line MUST contain at least 10 char to be a cvm minimal
         * comand.
         */
        if (1 < read) {
            // I choose to terminate my syslog format by \n
            // so it's safe to presume the n-1 is \n and erase it.
            line[read - 1] = '\0';
            // filter and process if it's a SupplementarInfoBox
            process_SupplementarInfoBox((const char**)&line);
            // Insert here future filters
        }
    }
    // Releasing line, mandatory according to getline doc.
    free(line);
}

int main(int argc, char* argv[]) {
    get_stdin_line();
    exit(0);
}
