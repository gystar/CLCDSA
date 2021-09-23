#include<stdio.h>
int main(){
  int n,k,x[100],i,A=0;
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++){
    scanf("%d",&x[i]);
    A+=x[i]<k-x[i]?x[i]:k-x[i];
  }
  printf("%d",A*2);
} 