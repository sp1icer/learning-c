#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c;
    float quadResPlus, quadResMinus;

    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);
    printf("Enter the third value: ");
    scanf("%d", &c);

    quadResPlus = (-b + powf((powf(b, 2.0) - (4 * a * c)),0.5))/(2 * a);
    quadResMinus = (-b - powf((powf(b, 2.0) - (4 * a * c)),0.5))/(2 * a);

    printf("The solution using + is: %6.4f\n", quadResPlus);
    printf("The solution using - is: %6.4f\n", quadResMinus);
}