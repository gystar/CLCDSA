#include <stdio.h>

int main(void)
{
        int N,K,X,Y,sum;
        scanf("%d%d%d%d",&N,&K,&X,&Y);
                if(N <= K)
                        {sum = N*X;}
                else
                        {sum = K*X + (N-K)*Y;}
        printf("%d\n",sum);
        return 0;
} 