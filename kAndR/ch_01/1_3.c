#include <stdio.h>

/*
	Prints a table of temperatures converted
	from Farenheit to Celsius in 20-deg steps.
*/

int main() {
	float currFahr, currCels;
	int lowerLimit, upperLimit, stepSize;

	lowerLimit = 0;
	upperLimit = 300;
	stepSize = 20;

	currFahr = lowerLimit;
	printf("%s %s\n", "FAHRENHEIT", "CELSIUS");
	printf("%s\n", "-------------------");
	while (currFahr <= upperLimit) {
	    currCels = (5.0/9.0) * (currFahr - 32.0);
	    printf("%10.0f %7.1f\n", currFahr, currCels);
	    currFahr += stepSize;
	}
}
