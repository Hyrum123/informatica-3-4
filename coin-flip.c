#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess;
    printf("I'm about to flip a coin. Make a guess\n1. Heads\n2. Tails\n");
    scanf("%d", &guess);
    srand(time(NULL));
    int coinFlip = (rand() % 2) + 1;
    printf("Here goes...\n");
    if(coinFlip == 1 && guess == 1) {
        printf("You guessed heads, and it was heads!\n");
    } else if (coinFlip == 2 && guess == 1) {
        printf("You guessed heads, and it was tails. You're trash\n");
    } else if(coinFlip == 1 && guess == 2) {
        printf("You guessed tails, and it was heads. You're trash\n");
    } else if(coinFlip == 2 && guess == 2) {
        printf("You guessed tails, and it was tails!\n");
    }
}