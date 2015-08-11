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

Build : cc -O3 -Wall -pedantic -std=c99 -fno-stack-protector -Wl,-Bstatic -lm -Wl,-Bdynamic -lc read_fifo.c -o read_fifo

*/

#define _GNU_SOURCE

#include "./lib/filter_cvm.h"

static void get_stdin_line(void);

static void get_stdin_line(void) {
    ssize_t read;
    size_t len = 0;
    char* line = NULL;
    while (-1 != (read = getline(&line, &len, stdin))) {
        if (1 < read) {
            line[read - 1] = '\0';
            process_SupplementarInfoBox((const char**)&line);
        }
    }
    free(line);
}

int main(int argc, char* argv[]) {
    get_stdin_line();
    exit(0);
}
