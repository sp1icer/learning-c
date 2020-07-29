#include <stdio.h>

int main() {
    int num;

    printf("Input a number between 1 and 500: ");
    scanf("%d", &num);
    if(1 <= num && num <= 100)
        printf("Your number is between 1 and 100!");
    else if (101 <= num && num <= 200)
        printf("Your number is between 101 and 200!");
    else if (201 <= num && num <= 300)
        printf("Your number is between 201 and 300!");
    else if (301 <= num && num <= 400)
        printf("Your number is between 301 and 400!");
    else if (401 <= num && num <= 500)
        printf("Your number is between 401 and 500!");
    else
        printf("Your number isn't in any of the ranges.");
}