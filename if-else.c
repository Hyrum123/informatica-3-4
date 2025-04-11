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
    if(even%2 == 0) {
        printf("Your number is even\n");
    } else {
        printf("Your number is odd\n\n");
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
    float calc1;
    float calc2;
    int operation;
    printf("\nEnter two numbers: \n");
    scanf("%f %f", &calc1, &calc2);    
    float add = calc1 + calc2;
    float sub = calc1 - calc2;
    float mul = calc1 * calc2;
    float div = calc1 / calc2;
    printf("Enter an operation (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division): ");
    scanf("%d", &operation);
    if(operation == 1) {
        printf("%f\n", add);
    } else if (operation == 2) {
        printf("%f\n", sub);
    } else if (operation == 3) {
        printf("%f\n", mul);
    } else if (operation == 4) {
        printf("%f\n", div);
    }


    return(0);
}