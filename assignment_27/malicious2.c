#include <stdio.h>
#include <unistd.h>
#include <dlfcn.h>
#include <string.h>


ssize_t write(int fd, const void *buffer, size_t count) {
    ssize_t (*new_write)(int, const void *, size_t);
    new_write = dlsym(RTLD_NEXT, "write");
    ssize_t result;

//    printf("[DEBUG] Entered write, created new_write...\n");

    if(strcmp(buffer,  "Hello world!") == 0) {
//        printf("[DEBUG] Attempting to compare strings...\n");
        new_write(fd, "Goodbye, cruel world!\n", 22);
        result = 12;
    }
    else
        result = new_write(fd, buffer, count);

//    printf("[DEBUG] Returning result.\n");
    return(result);
}