#include <stdio.h>

int main() {
    //equal or not equal
    int equal1;
    int equal2;
    printf("Enter two integers:\n");
    scanf("%d%d", &equal1, &equal2);
    if (equal1 == equal2) {
        printf("Both numbers are equal\n");
    } else {
        printf("Both numbers are not equal\n\n");
    }
    
    //even or odd
    int even;
    printf("\nEnter an integer: ");
    scanf("%d", &even);
    int check = even%2;
    if(check == 1) {
        printf("Your number is odd\n");
    } else {
        printf("Your number is even\n\n");
    }

    //day of the week
    int day;
    printf("\nEnter a day of the week from 1-7: ");
    scanf("%d", &day);
    if(day == 1) {
        printf("Your day is sunday\n");
    } else if (day == 2) {
        printf("Your day is monday\n");
    } else if (day == 3) {
        printf("Your day is tuesday\n");
    } else if (day == 4) {
        printf("Your day is wednesday\n");
    } else if (day == 5) {
        printf("Your day is thursday\n");
    } else if (day == 6) {
        printf("Your day is friday\n");
    } else {
        printf("Your day is saturday (best day)\n");
    }

    //calculator
    int calc1;
    int calc2;
    char operation;
    printf("Enter an operation (a for addition, s for subtraction, m for multiplication, d for division): ");
    scanf("%c", &operation);
    printf("\nEnter two numbers: \n");
    scanf("%d %d", &calc1, &calc2);
    if(operation == 'a') {
        printf("Hello");
    }


    return(0);
}