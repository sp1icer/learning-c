#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define INITIAL_CAPACITY 1

/*
 * Dynamic arrays come from this particular medium article.
 * https://medium.com/@imjacobclark/working-with-dynamic-arrays-in-c-c7d40a3cea01
 */

void push(float *arr, int index, float *value, int *size, int *capacity) {
    if(*size > *capacity) {
        realloc(arr, sizeof(arr) * 2);
        *capacity = sizeof(arr) * 2;
    }

    arr[index] = *value;
    *size = *size + 1;
}

void main() {
    // Setup for dynamic arrays.
    float* scores = malloc(INITIAL_CAPACITY * sizeof(float));
    int scoresSize = 0;
    int scoresCap = INITIAL_CAPACITY;
    int scoreCount = 0;

    // Regular variables.
    float scoreAvg;
    int contLoop = 1;
    float scoreInput;
    char *contAnswer;

    while(contLoop) {
        printf("Enter a test score: ");
        scanf("%f", &scoreInput);
        push(scores, scoreCount, &scoreInput, &scoresSize, &scoresCap);
        printf("CONTINUE? [Y/N]: ");
        scanf("%ms", &contAnswer);

        // Convert the y/n input to lowercase for comparison.
        // https://stackoverflow.com/questions/2661766/how-do-i-lowercase-a-string-in-c
        for(int i = 0; contAnswer[i]; i++)
            contAnswer[i] = tolower(contAnswer[i]);

        // Check to see if the user input anything OTHER than y/n.
        while(!strcmp(contAnswer, "yes") && !strcmp(contAnswer, "y") && !strcmp(contAnswer, "no") && !strcmp(contAnswer, "n")) {
            printf("[!] Please enter a valid selection.\n");
            printf("CONTINUE? [Y/N]: ");
            scanf("%ms", &contAnswer);
            // Convert the y/n input to lowercase for comparison.
            for(int i = 0; contAnswer[i]; i++)
                contAnswer[i] = tolower(contAnswer[i]);
        }

        // If the user entered no, kill the loop.
        if(strcmp(contAnswer, "no") || strcmp(contAnswer, "n")) {
            contLoop = 0;
            break;
        }
    }

    scoreAvg = 0;
    for (int i = 0; i <= scoresSize - 1; i++) {
        scoreAvg += scores[i];
    }

    printf("[*] The average of the test scores is: %2.2f", (scoreAvg / scoresSize));
}