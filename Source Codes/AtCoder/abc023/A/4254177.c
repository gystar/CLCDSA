#include <stdio.h>
int main(void){
    int X = 0;
    scanf("%ld", &X);
    printf("%d\n", (X/10) + (X%10));
    return 0;
} 