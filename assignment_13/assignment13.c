#include <stdio.h>

/*
 *   Create a program that prompts the user to input scoring totals for 5 players during 4 basketball games.
 *       The program will track which player had the highest scoring average over the 4 games and print the result to the terminal.
 *   Hint: Use a two-dimensional array and nested for loops. The outer-most for loop will iterate on a per game
 *       basis gathering scores for the inner-most for loop interating through players.
 *       Use this same model to create arrays to store total scores and to calculate averages.
 *   Extra Credit: There is none. This one is pretty hard!
 */

#define TOTAL_GAMES 5
#define TOTAL_PLAYERS 5

int main(void) {
    int currGame = 0;
    int currPlayer;
    int playerScore[5][5];
    float finalScoreAvg[5];
    int tmpVar;

    // Storing the values that the user passes in for stats.
    for(currGame; currGame < TOTAL_GAMES; currGame++) {
        printf("[*] GAME #%d STATS BELOW:\n", currGame+1);
        currPlayer = 0;
        for(currPlayer; currPlayer < TOTAL_PLAYERS; currPlayer++) {
            printf("\t[-] Enter stats for Player #%d: ", currPlayer+1);
            scanf("%d", &tmpVar);
            playerScore[currGame][currPlayer] = tmpVar;
        }
    }

    float scoreSum = 0;
    currPlayer = 0;

    // Calculating and storing player averages.
    for(currPlayer; currPlayer < TOTAL_PLAYERS; currPlayer++) {
        currGame = 0;
        scoreSum = 0;
        for(currGame; currGame < TOTAL_GAMES; currGame++) {
            scoreSum += playerScore[currGame][currPlayer];
        }
        finalScoreAvg[currPlayer] = (float) (scoreSum / 5.0);
    }

    // Finding player with best average and printing it out.
    float bestAvg = 0;
    int bestPlayer = 0;
    currPlayer = 0;
    printf("\n[*] RESULTS ARE IN!\n");
    for (currPlayer; currPlayer < TOTAL_PLAYERS; currPlayer++) {
        printf("\t-> Player #%d got an average of %f points per game.\n", (currPlayer + 1), finalScoreAvg[currPlayer]);
        if(finalScoreAvg[currPlayer] > bestAvg) {
            bestAvg = finalScoreAvg[currPlayer];
            bestPlayer = currPlayer + 1;
        }
    }
    printf("\t[!!!] The player with the best average was player #%d with an average of %f points per game!\n", bestPlayer, bestAvg);
}