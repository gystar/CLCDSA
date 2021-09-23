#include <stdio.h>
int main(void){
    int A = 0; int B = 0;
    scanf("%ld %ld", &A, &B);
    if(B / 100 >= 1){
        printf("%d\n", 2 * (A * 1000 + B));
    }else if(B / 10 < 10 && B / 10 >= 1){
        printf("%d\n", 2 * (A * 100 + B));
    }else {
        printf("%d\n", 2 * (A * 10 + B));
    }
    return 0;
} 