#include <stdio.h>
#include <unistd.h>
#include <dlfcn.h>
#include <string.h>


ssize_t write(int fd, const void *buffer, size_t count) {
    ssize_t (*new_write)(int, const void *, size_t);
    new_write = dlsym(RTLD_NEXT, "write");

//    printf("[DEBUG] Entered write, created new_write...\n");

    if(strcmp(buffer,  "Hello world!") == 0) {
//        printf("[DEBUG] Attempting to compare strings...\n");
        printf("Goodbye, cruel world!\n");
        return(12);
    }
    else
        printf("%s", buffer);

//    printf("[DEBUG] Returning result.\n");
    return(0);
}