#include <stdio.h>
int main(void)
{
  int A,B,C,result;
  scanf("%d %d %d",&A,&B,&C);
  if ((A+B+1)>=C) result=B+C;
  else result=2*B+A+1;
  printf("%d",result);
  return 0;
} 