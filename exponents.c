#include <stdio.h>

int main() {
    int base;
    int exp;
    int whichLoop;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);
    printf("Which type of loop do you want (same difference):\n1. While Loop\n2. For Loop\nChoose your option: ");
    scanf("%d", &whichLoop);
    int count = 1;
    long long int result = base;
    if(whichLoop == 2) {
        for(count = 1; count < exp; count++) {
            result = result * base;
        }
        printf("%lli\n", result);
    }
    if(whichLoop == 1) {
        while(count < exp) {
            result = result * base;
            count += 1;
        }
        printf("%lli\n", result);
    }
}