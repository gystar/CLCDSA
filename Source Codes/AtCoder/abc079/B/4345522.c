#include <stdio.h>
int main(){
  long long int n,a[99];
  scanf("%lld",&n);
  a[0]=2;a[1]=1;
  for(int i=2;i<=n;i++){
    a[i]=a[i-1]+a[i-2];
  }
  printf("%lld",a[n]);
  return 0;
} 