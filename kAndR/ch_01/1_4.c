#include <stdio.h>

int main() {
    float currFahr, currCels;
    int lowerLim, upperLim, stepSize;

    lowerLim = 0;
    upperLim = 300;
    stepSize = 20;

    currCels = lowerLim;
    printf("%s %s\n", "CELSIUS", "FAHRENHEIT");
    printf("%s\n", "-------------------");
    while (currCels <= upperLim) {
        currFahr = currCels * (9.0 / 5.0) + 32.0;
        printf("%9.1f %10.1f\n", currCels, currFahr);
        currCels += stepSize;
    }
}