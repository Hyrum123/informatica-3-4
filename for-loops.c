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
    int num2;
    printf("Type any natural number: ");
    scanf("%d", &num2);
    int bigMul = 1;
    for(int mul = num2; mul > 0; mul--) {
        bigMul = mul * bigMul;
    }
    printf("%d\n", bigMul);

    return(0);
}
