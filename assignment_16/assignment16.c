#include <stdio.h>

int main(void) {
    int myInt[10] = {1,2,3,4,5,6,7,8,9,10};
    int *myPtr;
    myPtr = myInt;
    printf("\tSizeof INT: %d\n", sizeof(int));
    printf("\tPointer to array: %p\n", myPtr);
    printf("\tArray as an integer: %p\n", myInt);
}