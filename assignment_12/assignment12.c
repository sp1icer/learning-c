#include <stdio.h>
#include <stdlib.h>

int main(void) {
//  printf("Rand number: %f", drand48());
//  Produces a float between 0.0 and 1.0 randomly.
//  Prompt the user for a number of coin flips (x) and then simulate (x) number of coin flips and print the results to the terminal.
    int randNum, coinFlips;
    int numHeads, numTails;

    printf("Please enter the number of coin flips: ");
    scanf("%d", &coinFlips);
    printf("\n[*] Beginning coin flip simulation!\n");

    numHeads = 0;
    numTails = 0;
    for (int i = 1; i <= coinFlips; i++) {
        randNum = rand() % 100 + 1;
        if (randNum <= 50)
            ++numTails;
        else
            ++numHeads;
    }

    printf("================================\n");
    printf("\n[!] RESULTS:\n");
    printf("\tHEADS: %d\n", numHeads);
    printf("\tTAILS: %d\n", numTails);
}