#include <stdio.h>
#include <math.h>

#define PIE 3.14159

int main(void) {
    float radius;

    printf("Enter the radius of your circle: ");
    scanf("%f", &radius);
    printf("The area of the circle is %5.3f", (PIE * powf(radius, 2.0)));
}