#include <stdio.h>

int main() {
    int num, denom;

    printf("Enter a numerator: ");
    scanf("%d", &num);
    printf("Enter a denominator: ");
    scanf("%d", &denom);

    if (num % denom == 0)
        printf("There is NOT a remainder!");
    else
        printf("There IS a denominator!");
}