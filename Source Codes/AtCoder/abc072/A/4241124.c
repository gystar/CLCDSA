#include <stdio.h>

int main(void)
{
        int X,t;
        scanf("%d%d",&X,&t);
        if(X >= t)
                {
                int r=X-t;
                printf("%d",r);
                }
        else
                {
                printf("0");
                }
        return 0;
} 