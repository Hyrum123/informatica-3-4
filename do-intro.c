#include <stdio.h>

int main() {
    long int number;
    printf("Enter a number: ");
    scanf("%li", &number);
    int test = 1;
    int output = 0;
    while(number / test >= 1) {
        test = test * 10;
        output += 1;
    }
    printf("%d\n", output);
}