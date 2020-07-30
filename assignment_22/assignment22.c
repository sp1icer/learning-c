#include <stdio.h>

struct stats {
    int points;
    int games;
};

void main(void) {
    struct stats player[5];

    printf("\nPLAYER STAT TRACKER V1.0\n");
    printf("========================\n");
    for(int c = 0; c < 5; c++) {
        printf("\t-> Enter Player %d's total points: ", c + 1);
        scanf("%d", &player[c].points);
        printf("\t-> Enter Player %d's total games played: ", c + 1);
        scanf("%d", &player[c].games);
    }

    printf("\nPLAYER RESULTS SCREEN\n");
    printf("=====================\n");
    for(int c = 0; c < 5; c++) {
        printf("\t-> Player %d's average ppg was: %.2f\n", (c+1), ((float) player[c].points / player[c].games));
    }
}