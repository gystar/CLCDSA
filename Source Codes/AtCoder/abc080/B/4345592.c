#include <stdio.h>
int main(){
  long long int n;
  scanf("%lld",&n);
  int sum=0,tmp=n;
  while(n!=0){
    sum+=n%10;
    n/=10;
  }
  if(tmp%sum==0) printf("Yes");
  else printf("No");
  return 0;
} 