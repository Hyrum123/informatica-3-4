#include <stdio.h>

int main() {
    int height;
    printf("Enter a height for a triangle: ");
    scanf("%d", &height);
    char thing;
    printf("Enter a character: ");
    scanf(" %c", &thing);

    for(int row = 1; row <= height; row++) {
        for(int space = height; height >= row; height--) {
            printf(" ");
            }
        for(int col = 1; col <= row; col++) {
            printf("%c", thing);
        }
        printf("\n");
    }
}