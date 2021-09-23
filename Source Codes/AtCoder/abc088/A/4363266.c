#include "stdio.h"
int main()
{
    int A, N;

    scanf("%d %d", &N, &A);

    if(N % 500 <= A)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
} 