#include <stdio.h>
typedef long long ll;
int g[101][101];
int H,W,N,x,k,i,j;
int main()
{
    while(scanf("%d%d%d",&H,&W,&N)!=EOF)
    {
        k=-1;
        for(i=1;i<=N;i++)
        {
            scanf("%d",&x);
            while(x--) k++,g[(k/H)&1?(H-1-(k%H)):k%H][k/H]=i;
        }
        for(i=0;i<H;i++)
        {
            for(j=0;j<W;j++)
            {
                if(j) printf(" ");
                printf("%d",g[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
} 