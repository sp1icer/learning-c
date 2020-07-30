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
    printf("[*] The open operation succeeded!\n");
    if(write(fd, "Writing test data to the file.", 30) != 30) {
        printf("[!] There was an error writing data to the file.");
        return -1;
    }
    if(close(fd) < 0) {
        printf("[!] There was an error closing the file!");
        return -1;
    }
    return 0;
}
