#include<stdio.h>
int main()
{
    int  N, A, B, X;
    scanf("%d %d %d", &N, &A, &B);
     X = N * A;
    if(X<B)
     printf("%d\n", X);
    else
     printf("%d\n", B);
     return 0;
} 