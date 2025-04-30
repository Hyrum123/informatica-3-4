#include <stdio.h>

int main() {
    int num;
    printf("Type any natural number: ");
    scanf("%d", &num);
    int bigSum = 0;    
    for(int sum = 1; sum <= num; sum++) {
        bigSum = bigSum + sum;
    }
    printf("%d\n", bigSum);
    return(0);
}
