#include <stdio.h>
int main(void){
  long long int n;
  scanf("%lld",&n);
  if(n==12){
    printf("%lld\n",n+1-12);
  }
  else{
    printf("%lld\n",n+1);
  }
  return 0;
} 