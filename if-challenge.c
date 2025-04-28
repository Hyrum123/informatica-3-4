#include <stdio.h>

int main() {
    int year;
    printf("Enter any year my boy: ");
    scanf("%d", &year);
    if(year % 400 == 0) {
        printf("Your year is a leap year. hooray\n");
    } else if(year % 100 == 0) {
        printf("Your year is not a leap year\n");
    } else if(year % 4 == 0) {
        printf("Your year is a leap year. hooray\n");
    } else {
        printf("Your year is not a leap year\n");
    }
    return(0);
}