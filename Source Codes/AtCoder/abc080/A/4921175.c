#include<stdio.h>
int main()
{
    int N, A, B, x;
    scanf("%d %d %d",&N, &A, &B);
    x=N*A;
    if(x>B)
    {
        printf("%d",B);
    }
    else if(x==B)
    {
        printf("%d\n",x);
    }
    else
    {
        printf("%d",x);
    }
    return 0;
} 