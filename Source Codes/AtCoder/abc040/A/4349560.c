#include<stdio.h>
int main(void){
  int n,x;
  scanf("%d%d",&n,&x);
  if((n-x)>x-1) printf("%d\n",x-1);
  else printf("%d\n",n-x);
  return 0;
} 