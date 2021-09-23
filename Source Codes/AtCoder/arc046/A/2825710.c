#include<stdio.h>
int main(){
  int n,i;
  scanf("%d",&n);
  n--;
  for(i=0;i<n/9+1;i++)printf("%d",n%9+1);
  printf("\n");
  return 0;
} 