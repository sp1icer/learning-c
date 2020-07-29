#include <stdio.h>

/*
	Prints a table of temperatures converted
	from Farenheit to Celsius in 20-deg steps.
*/

int main() {
	int currFahr, currCels;
	int lowerLimit, upperLimit, stepSize;

	lowerLimit = 0;
	upperLimit = 300;
	stepSize = 20;

	currFahr = lowerLimit;
	while (currFahr <= upperLimit) {
	    currCels = 5 * (currFahr - 32) / 9;
	    printf("%d\t%d\n", currFahr, currCels);
	    currFahr += stepSize;
	}
}
