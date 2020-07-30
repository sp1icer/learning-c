#include <stdio.h>
#include <unistd.h>
#include <dlfcn.h>
#include <string.h>

/*
 * MAN PAGES:
 * DLSYM:   https://linux.die.net/man/3/dlsym
 * PUTS:    https://linux.die.net/man/3/puts
 */

int puts(const char *message) {
    // Declare pointer that points to original puts() function.
    int (*new_puts)(const char *message);
    int result;

    // RTLD_NEXT tells loader API we want the NEXT instance of puts.
    new_puts = dlsym(RTLD_NEXT, "puts");

    // String match and replace.
    if(strcmp(message, "Hello world!") == 0)
        result = new_puts("Goodbye cruel world!");
    else
        result = new_puts(message);

    return result;
}