#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c;
    float quadResPlus, quadResMinus, quadCheck;

    printf("Enter the first value: ");
    scanf("%f", &a);
    printf("Enter the second value: ");
    scanf("%f", &b);
    printf("Enter the third value: ");
    scanf("%f", &c);

    quadResPlus = (-b + sqrt((powf(b, 2.0) - (4 * a * c))))/(2 * a);
    quadResMinus = (-b - sqrt((powf(b, 2.0) - (4 * a * c))))/(2 * a);

    if(((a * powf(quadResPlus, 2.0)) + (b * quadResPlus) + c) == 0)
        printf("The solution using + is: %f\n", quadResPlus);
    else
        printf("The solution using + is: %f, but go check just in case...\n", quadResPlus);

    if(((a * powf(quadResMinus, 2.0)) + (b * quadResMinus) + c) == 0)
        printf("The solution using + is: %f\n", quadResMinus);
    else
        printf("The solution using + is: %f, but go check just in case...\n", quadResMinus);
}