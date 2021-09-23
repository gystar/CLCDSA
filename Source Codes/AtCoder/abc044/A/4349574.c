#include<stdio.h>
int main(void){
  int n,k,x,y;
  scanf("%d",&n);
  scanf("%d",&k);
  scanf("%d",&x);
  scanf("%d",&y);
  if(n>k) printf("%d\n",(n-k)*y+k*x);
  else printf("%d\n",n*x);
  return 0;
} 