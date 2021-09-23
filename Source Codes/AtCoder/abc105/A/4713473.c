#include <stdio.h>

int main(void){
    int N, K; 
    scanf("%d%d", &N, &K);
    printf("%d\n", (N%K > 0) ? 1 : 0);
    return 0; 
} 