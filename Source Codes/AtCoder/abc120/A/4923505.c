#include<stdio.h>

int main (void)
{
int A,B,C,o;

        scanf("%d%d%d",&A,&B,&C);

        o = B/A;

        if(o>C) printf("%d\n",C);
        else    printf("%d\n",o);

        return 0;
} 