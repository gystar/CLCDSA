#include <stdio.h>

int main(void)
{
    int N;
    
    scanf("%d%*c", &N);
    printf("%02d:%02d:%02d\n", N /3600, N % 3600 / 60, N % 3600 % 60);
    
    return 0;
} 