#include<stdio.h>
int main(){
  int n,i;
  long long l[87]={2,1};
  scanf("%d",&n);
  for(i=2;i<=n;i++){
    l[i]=l[i-1]+l[i-2];
  }
  printf("%lld",l[n]);
} 