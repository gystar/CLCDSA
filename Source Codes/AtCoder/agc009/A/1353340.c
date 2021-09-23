#include <stdio.h>

int main(){

  long long int n,i,j,count=0,tmp;
  long long int a[100010];
  long long int b[100010];

  scanf("%lld",&n);

  for(i = 0; i < n; i++){
    scanf("%lld %lld",&a[i],&b[i]);
  }

  for(i = n-1; i >= 0; i--){
    a[i] += count;
    if(a[i]% b[i] != 0){
      tmp=b[i] - a[i] % b[i];
      count += tmp;
    }
  }
  printf("%lld\n",count);
  return 0;
} 