#include<stdio.h>

int main(void)
{
  int a;
  int b;
  int c;
  scanf("%d %d",&a,&b);
  c=a;
  a=b;
  b=c;
  printf("%d %d\n",a,b);

  return 0;
} 