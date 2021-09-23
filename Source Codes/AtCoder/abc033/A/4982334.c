#include<stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  if(N%1111==0)
  {
    printf("SAME\n");
  }
  else if(N%1111!=0)
  {
    printf("DIFFERENT\n");
  }
  return 0;
} 