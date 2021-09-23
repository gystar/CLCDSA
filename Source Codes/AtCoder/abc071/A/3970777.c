#include <stdio.h>
int main ()
{
    int a, b, x;
    scanf ("%d %d %d", &x, &a, &b);
    if ((x>=1) && (x<=1000) && (a>=1) && (x<=1000) && (b>=1) && (x<=1000)){

    a = abs (a-x);
    b = abs (b-x);
    if (a>b)
    {
        printf("B\n");
    }
    else printf ("A\n");
    }
    return 0;
} 