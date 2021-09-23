#include<stdio.h>
int main(){
  int n,m,s=0,i;
  scanf("%d %d",&n,&m);
  s=100*(n-m)+1900*m;
  for(i=0;i<m;i++)s*=2;
  printf("%d\n",s);
  return 0;
} 