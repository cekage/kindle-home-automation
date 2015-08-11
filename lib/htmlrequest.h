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

*/

#define _GNU_SOURCE



#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <netdb.h>
#include <string.h>
#include <unistd.h>

static int create_tcp_socket(void);
static char* get_ip(const char* host);
static char* build_get_query(const char* host, const char* page);
void do_http_request(const char* room);

#define PORT 8080
#define USERAGENT "kindle DOMOTIQUE"
#define MAX_ROOMNAME 32

static int create_tcp_socket(void) {
    int sock;
    if ((sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) < 0) {
        perror("Can't create TCP socket");
        exit(EXIT_FAILURE);
    }
    return sock;
}

static char* get_ip(const char* host) {
    struct hostent* hent;
    size_t iplen = 15; //XXX.XXX.XXX.XXX
    char* ip = malloc(iplen + 1);
    if (ip == NULL) {
        perror("Can't malloc ip");
        exit(EXIT_FAILURE);
    }
    memset(ip, 0, iplen + 1);
    hent = gethostbyname(host);
    if (hent == NULL) {
        perror("Can't get IP");
        exit(EXIT_FAILURE);
    }
    if (inet_ntop(AF_INET, (void*)hent->h_addr_list[0], ip, (socklen_t) iplen) == NULL) {
        perror("Can't resolve host");
        exit(EXIT_FAILURE);
    }
    return ip;
}

static char* build_get_query(const char* host, const char* page) {
    char* query;
    const char* tpl = "GET /%s HTTP/1.0\r\nHost: %s\r\nUser-Agent: %s\r\n\r\n";
    // -5 is to consider the %s %s %s in tpl and the ending \0
    size_t query_size;
    query_size = strlen(host) + strlen(page) + strlen(USERAGENT) + strlen(tpl);
    query = (char*)malloc(query_size + 1);
    if (query == NULL) {
        perror("Can't malloc query");
        exit(EXIT_FAILURE);
    }
    (void)snprintf(query, query_size, tpl, page, host, USERAGENT);
    return query;
}

static void print_http_response(const int socket) {
    ssize_t received_count;
    char* received_data = calloc(sizeof(char), 2048 + 1);
    if (received_data == NULL) {
        perror("Error receiving data");
        exit(EXIT_FAILURE);
    }
    while ((received_count = recv(socket, received_data, 2048, 0)) > 0) {
        (void)printf("%s", received_data);
        memset(received_data, 0, 2048);
    }
    // If error occurs during recv :
    if (received_count < 0) {
        perror("Error receiving data");
        exit(EXIT_FAILURE);
    }
    free(received_data);
}

void do_http_request(const char* room) {
    struct sockaddr_in* remote;
    int sock;
    char* ip;
    char* get;
    const char* host = "mbp";
    char page[MAX_ROOMNAME+1];
    int pton_result;
    size_t sent;
    (void)snprintf(page, MAX_ROOMNAME, "?toggle=%s", room);
    sock = create_tcp_socket();
    remote = malloc(sizeof(struct sockaddr_in*));
    if (remote == NULL) {
        perror("Can't malloc remote");
        exit(EXIT_FAILURE);
    }
    remote->sin_family = AF_INET;
    ip = get_ip(host);
    pton_result = inet_pton(AF_INET, ip, &(remote->sin_addr.s_addr));
    if ( pton_result < 0) {
        perror("Can't get s_addr");
        exit(EXIT_FAILURE);
    } else if (pton_result == 0) {
        perror("Not a valid IP address\n");
        exit(EXIT_FAILURE);
    }
    remote->sin_port = htons(PORT);
    if (connect(sock, (struct sockaddr*)remote, (socklen_t) sizeof(struct sockaddr)) < 0) {
        perror("Could not connect");
        exit(EXIT_FAILURE);
    }
    get = build_get_query(host, page);
    //Send the query to the server
    sent = 0;
    while (sent < strlen(get)) {
        static ssize_t tmpres;
        tmpres = send(sock, get + sent, strlen(get) - sent, 0);
        if (tmpres == -1) {
            perror("Can't send query");
            exit(EXIT_FAILURE);
        }
        sent += tmpres;
    }
    print_http_response(sock);
    free(get);
    free(remote);
    free(ip);
    (void)close(sock);
}
