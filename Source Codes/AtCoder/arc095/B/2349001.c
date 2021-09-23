#include<stdio.h>
#include<stdlib.h>
int main(){
  int n,a=0,b=0,d[100010],i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&d[i]);
    if(a<d[i])a=d[i];
  }
  for(i=0;i<n;i++){
    if(abs(a/2-d[i])<abs(a/2-b))b=d[i];
  }
  printf("%d %d\n",a,b);
  return 0;
} 