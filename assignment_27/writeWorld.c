#include <stdio.h>
#include <unistd.h>

int main(void) {
    if(write(1, "Hello world!", 12) != 12) {
        write(2, "There was an error writing to standard out.", 43);
        return(-1);
    }
    return 0;
}