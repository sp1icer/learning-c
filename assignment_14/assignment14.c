#include <stdio.h>

int main(void) {
    int tmpVar = 8;
    int *ptr;

    // Assign ptr to address of tmpVar.
    ptr = &tmpVar;

    // Grab the value of the ptr and output.
    printf("%p", ptr);
}