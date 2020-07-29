#include <stdio.h>
#include <stdlib.h>

void main() {
    int myArr[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("The array has %d elements.", (int) sizeof(myArr)/4);
}