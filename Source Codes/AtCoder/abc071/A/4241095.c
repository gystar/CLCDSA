#include <stdio.h>

int main(void)
{
        int x,a,b;
        scanf("%d%d%d",&x,&a,&b);
        int la = (x-a)*(x-a);
        int lb = (x-b)*(x-b);
        if(la < lb)
                {printf("A\n");}
        else
                {printf("B\n");}
        return 0;
} 