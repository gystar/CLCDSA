#include<stdio.h>

int main(void)
{
  int n=0;
  scanf("%d",&n);
  if(n<12){
    printf("%d\n",n+1);
  }else if (n==12){
    printf("1\n");
  }
  return 0;
} 