#include<stdio.h>

int main(void)
{
  int N=0;
  int i=0;
  double sum=0;
  scanf("%d",&N);
  for(i=0;i<N;i++)
    {
       sum+=(i+1)*10000;
    }
  printf("%d\n",(int)(sum/N));
  return 0;
} 