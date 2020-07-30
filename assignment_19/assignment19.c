#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char * ptr = malloc(sizeof(*ptr)*256);

    if (ptr == NULL) {
        printf("[!] ERR: malloc() failed, please try again.");
        exit(1);
    }
    else
        printf("[*] SUCCESS: malloc() succeeded with an address of %p.", ptr);
}