#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct myStruct {
    int myInt;
    char myChar;
    float myFloat;
};

void main(void) {
    struct myStruct struct1;

    struct1.myInt = 50;
    struct1.myChar = 'c';
    struct1.myFloat = 123.12;

    printf("[*] struct1.myInt: %d\n", struct1.myInt);
    printf("[*] struct1.myChar: %c\n", struct1.myChar);
    printf("[*] struct1.myFloat: %f\n", struct1.myFloat);
}