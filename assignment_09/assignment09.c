#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if(argc < 3 || argc > 4) {
        printf("\n[*] USAGE INSTRUCTIONS:\n");
        printf("\tUsage: ./assignment09 <firstname> <lastname>\n");
        printf("\tThis program is designed to greet the designated user.");
        exit(0);
    }

    printf("Hello, %s %s!", argv[1], argv[2]);
}