#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            while ((c = getchar()) == ' ')
                ;
            putchar(' ');
            putchar(c);
            if (c == EOF)
                break;
        }
        else {
            putchar(c);
        }
    }
}