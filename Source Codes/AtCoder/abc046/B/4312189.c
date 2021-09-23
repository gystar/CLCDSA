#include<stdio.h>
int main(){
  int n,k,a;
  scanf("%d%d",&n,&k);
  a=k;
  while(--n) a*=k-1;
  printf("%d",a);
} 