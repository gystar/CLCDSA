#include<stdio.h>

int main(void)
{
  int H,W,h,w,n,m,k,a;
  scanf("%d%d%d%d",&H,&W,&h,&w);
  n=H*W;
  m=h*W;
  k=(H-h)*w;
  a=n-(k+m);
  printf("%d\n",a);
  return 0;
} 