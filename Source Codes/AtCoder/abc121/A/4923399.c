#include<stdio.h>

int main (void)
{
        int H, W, h, w, v, x, y, a;
        scanf("%d%d",&H, &W);
        scanf("%d%d",&h, &w);

        v=H*W;

        x=h*W+(H-h)*w;

        a=v-x;
        printf("%d\n",a);
        return 0;
} 