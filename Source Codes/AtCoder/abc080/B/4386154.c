#include<stdio.h>

int main(void){
  int n,m,sum=0;
  scanf("%d",&n);
  m=n;
  while(n>0){
    sum+=n%10;
    n/=10;
  }
  if(m%sum==0) printf("Yes\n");
  else printf("No\n");
  return 0;
} 