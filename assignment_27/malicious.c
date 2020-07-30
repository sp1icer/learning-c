#include <stdio.h>
#include <unistd.h>
#include <dlfcn.h>
#include <string.h>


ssize_t write(int fd, const void *buffer, size_t count) {
    int (*new_write)(int fd, const void *buffer, size_t count);
    new_write = dlsym(RTLD_NEXT, "write");
    int result;
    printf("[DEBUG] Entered write, created new_write...");

    if(strcmp(buffer,  "Hello, world!") == 0) {
        printf("[DEBUG] Attempting to compare strings...");
        result = write(fd, "Goodbye, cruel world!", 21);
    }
    else
        result = write(fd, buffer, count);

    printf("[DEBUG] Returning result.");
    return(result);
}