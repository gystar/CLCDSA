#include <stdio.h>
int main(void)
{
  int H,W,h,w,s;
  scanf("%d%d%d%d",&H,&W,&h,&w);

  s = H*W - h*W - H*w + h*w;

  printf("%d",s);

  return 0;
} 