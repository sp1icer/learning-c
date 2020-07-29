#include <stdio.h>

int main(void) {
    long secInput;
    int secs, mins, hrs;

    printf("Please enter the number of seconds to convert: ");
    scanf("%ld", &secInput);
    hrs = (int) (secInput / 3600);
    mins = (int) ((secInput - (hrs * 3600)) / 60);
    secs = (int) (secInput - (hrs * 3600) - (mins * 60));
    printf("%ld seconds is %d hours, %d minutes, %d seconds.", secInput, hrs, mins, secs);
}