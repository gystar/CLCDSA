#include<stdio.h>

int main(void)
{
        int a, b, c, d;

        scanf("%d%d%d%d", &a,&b,&c,&d);

        printf("%d", (a*b)-(c*b)-(d*a)+(c*d));
        return 0;

} 