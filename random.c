#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int dieNum;
    printf("Enter how many times you want to roll a dice: ");
    scanf("%d", &dieNum);
    for(int count = 1; count <= dieNum; count++) {
        int diceRoll = (rand() % 6) + 1;
        printf("Roll %d: %d\n", count, diceRoll);
    }
}