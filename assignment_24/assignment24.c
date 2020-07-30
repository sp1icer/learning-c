#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(void) {
    int fd = open("testfile.txt", O_CREAT | O_WRONLY, S_IRWXU);
    if (fd < 0) {
        printf("[!] The file descriptor failed to open. Exiting.\n");
        return -1;
    }
    printf("[*] The operation succeeded!\n");
    return 0;
}
