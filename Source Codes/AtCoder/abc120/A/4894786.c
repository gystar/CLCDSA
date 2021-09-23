#include<stdio.h>

int main(void)
{
        int A, B, C, s;

        scanf("%d%d%d", &A, &B, &C);

        s = B / A;
        if(C>s) printf("%d\n", s);

        else printf("%d\n", C);

        return 0;
} 