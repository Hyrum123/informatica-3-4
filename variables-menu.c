#include <stdio.h>

int main() {
    char snack1[] = "Frozen grapes";
    char snack2[] = "Dinamitas";
    char snack3[] = "Fanta";
    int price1 = 100;
    int price2 = 10;
    int price3 = 15;
    int quant1 = 1;
    int quant2 = 100;
    int quant3 = 20;

    printf("Welcome to the snack shop!\n ");
    printf("-------------------------------\n");
    printf("Item\t\tPrice\tQuantity\n");
    printf("%s\t", snack1);
    printf("$%d\t", price1);
    printf("%d\n", quant1);
    printf("%s\t", snack2);
    printf("$%d\t", price2);
    printf("%d\n", quant2);
    printf("%s\t\t", snack3);
    printf("$%d\t", price3);
    printf("%d\n", quant3);


}