#include<stdio.h>
int main(){
  int n,a,b,c=5;
  scanf("%d %d %d",&n,&a,&b);
  if(n<5)c=n;
  printf("%d\n",c*b+(n-c)*a);
  return 0;
} 