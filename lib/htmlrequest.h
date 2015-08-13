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

    TODO : optimize

    More than inspired by http://coding.debuntu.org/c-linux-socket-programming-tcp-simple-http-client !

    Deep regrets I can't use libcurl …

*/

#define _GNU_SOURCE
#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <netdb.h>
#include <string.h>
#include <unistd.h>

void get_ip(const char* host, char** dest);
//~ static char* build_get_query(const char* host, const char* page);
void do_http_request(const char* http_request);
void send_and_receive_data(const int sock, const char* http_request);

#define SERVER "mbp"
#define PORT 8080
#define USERAGENT "kindle DOMOTIQUE"


void get_ip(const char* host, char** dest) {
    const size_t iplen = 15; //XXX.XXX.XXX.XXX
    *dest = calloc(sizeof(char), iplen + 1);
    if (*dest != NULL) {
        struct hostent* hent;
        hent = gethostbyname(host);
        if (hent != NULL) {
            if (inet_ntop(AF_INET, (void*)hent->h_addr_list[0], *dest,
                          (socklen_t) iplen) == NULL) {
                perror("Can't resolve host");
            }
        } else {
            perror("get_ip() Can't gethostbyname()");
        }
    } else {
        perror("get_ip() Can't calloc");
    }
}
//~ static char* build_get_query(const char* host, const char* page) {
//~ char* query;
//~ const char* tpl = "GET /%s HTTP/1.0\r\nHost: %s\r\nUser-Agent: %s\r\n\r\n";
//~ (void)asprintf(&query, tpl, page, host, USERAGENT);
//~ return query;
//~ }
static void print_http_response(const int socket) {
    const int MAXCOUNT = 2048;
    char* received_data = calloc(sizeof(char), MAXCOUNT);
    if (received_data != NULL) {
        ssize_t received_count;
        while ((received_count = recv(socket, received_data, MAXCOUNT, 0)) > 0) {
            (void)printf("%s", received_data);
            memset(received_data, 0, MAXCOUNT);
        }
        if (received_count < 0) {
            perror("Error receiving data");
        }
        free(received_data);
    } else {
        perror("Error receiving data");
    }
}
void send_and_receive_data(const int sock, const char* http_request) {
    char* get;
    //~ get = build_get_query(SERVER, page);
    const char* tpl = "GET /%s HTTP/1.0\r\nHost: %s\r\nUser-Agent: %s\r\n\r\n";
    if (-1 != asprintf(&get, tpl, http_request, SERVER, USERAGENT)) {
        //Send the query to the server
        size_t sent;
        sent = 0;
        while (sent < strlen(get)) {
            static ssize_t tmpres;
            tmpres = send(sock, get + sent, strlen(get) - sent, 0);
            if ( -1 == tmpres) {
                perror("Can't send query");
            }
            sent += tmpres;
        }
        free(get);
        print_http_response(sock);
    }
}
void do_http_request(const char* http_request) {
    //~ (void)printf("[******  do_http_request(%s)  *******]",http_request);
    int sock;
    sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (-1 != sock) {
        struct sockaddr_in remote;
        char* ip;
        remote.sin_family = AF_INET;
        get_ip(SERVER, &ip);
        if (ip != NULL) {
            int pton_result;
            pton_result = inet_pton(AF_INET, ip, &(remote.sin_addr.s_addr));
            free(ip);
            if ( pton_result > 0) {
                remote.sin_port = htons(PORT);
                if (connect(sock, (struct sockaddr*)&remote,
                            (socklen_t) sizeof(struct sockaddr)) == 0) {
                    send_and_receive_data(sock, http_request);
                } else {
                    perror("Can't connect");
                }
            } else {
                perror("do_http_request() Can't inet_pton");
            }
        }
    }
    (void)close(sock);
}
