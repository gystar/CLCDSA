#include <stdio.h>

int main()
{
    int H, W, h, w;
    
    scanf("%d%d",&H,&W);
    scanf("%d%d",&h,&w);
    
    printf("%d\n", H*W - h*W - w*(H-h));
    
    return 0;
} 