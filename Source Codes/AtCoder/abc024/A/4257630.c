#include <stdio.h>
int main(void){
    int A, B, C, K = 0;
    int S, T = 0;
    scanf("%ld %ld %ld %ld", &A, &B, &C, &K);
    scanf("%ld %ld", &S, &T);
    int sum = 0;
    if(S + T >= K){
        sum = (A-C) * S + (B-C) * T;
    }else {
        sum = A * S + B * T;
    }
    printf("%d\n", sum);
    return 0;
} 