#include <stdio.h>

void hello(void)
{
    char array[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33};
    char *ptr;
    ptr = array;

    printf("%s", array);
    puts(ptr);
}

int main(void)
{
    hello();
}