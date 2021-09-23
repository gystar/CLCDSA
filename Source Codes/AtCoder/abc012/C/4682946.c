#include<stdio.h>

int main(void)
{
  int n,i;
  scanf("%d",&n);

  n=2025-n;

  for(i=1;i<=9;i++){
    if(n%i==0&&n/i<=9){
      printf("%d x %d\n",i,n/i);
    }
  }

  return 0;
} 