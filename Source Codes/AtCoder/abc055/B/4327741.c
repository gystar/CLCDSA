#include<stdio.h>
int main(){
  long long n,i,p=1;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    p=(p*i)%1000000007;
  }
  printf("%lld",p);
} 