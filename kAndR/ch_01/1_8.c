#include <stdio.h>

int main() {
    int c, ws;

    ws = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++ws;
        else if (c == '\t')
            ++ws;
        else if (c == ' ')
            ++ws;
    }
    printf("%d newlines, tabs, and spaces.\n", ws);
}