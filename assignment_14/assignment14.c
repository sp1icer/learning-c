#include <stdio.h>

int main(void) {
    int tmpVar = 8;
    int *ptr;

    // Assign ptr to address of tmpVar.
    ptr = &tmpVar;

    // Grab the value out of ptr and output.
    printf("%d", *ptr);
}