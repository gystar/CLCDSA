#include <stdio.h>
int main(void){
    int A, B, C, D = 0;
    scanf("%ld %ld %ld %ld", &A, &B, &C, &D);
    if(A + B > C + D){
        printf("Left\n");
    }else if(A + B < C + D){
        printf("Right\n");
    }else {
        printf("Balanced\n");
    }
    return 0;
} 