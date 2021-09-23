#include<stdio.h>
int main(){
  int a,b,n,m=0;
  scanf("%d %d %d",&a,&b,&n);
  for(m=n;n>=a;m+=b)n-=a-b;
  printf("%d\n",m);
  return 0;
} 