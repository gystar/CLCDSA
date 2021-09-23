#include <stdio.h>
int main()
{
    int N, A, B, a;
    scanf("%d%d%d", &N, &A, &B);
    if (1 <= N <= 20 && 1 <= A <= 100 && 1 <= B <= 2000)
    {
        a = N * A;
        if (a > B)
        {
            printf("%d", B);
        }
        else
        {
            printf("%d", a);
        }
    }
} 