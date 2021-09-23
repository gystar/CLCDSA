#include <stdio.h>
int main(void){
    int T, X;
    scanf("%d %d", &T, &X);
    double t = (double) T / X;
    printf("%f\n", t);
    return 0; 
} 