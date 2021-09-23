#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
    N *= N%2 + 1;
    printf("%d\n", N);
    return 0; 
} 