#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,w,i,up[51],count=1;
    scanf("%d",&N);
if (N == 0) {
  printf("0\n");
  return 0;
}
    scanf("%d",&w);
    up[count]=w;
    for(i=1; i<N; i++)
    {
        scanf("%d",&w);
        int l=1;
        for(; l<=count; l++)
        {
            if(up[l]>=w)
            {
                up[l]=w;
                break;
            }
        }
        if(l>count)
        {
            up[++count]=w;
        }

    }
    printf("%d\n",count);
    return 0;
} 