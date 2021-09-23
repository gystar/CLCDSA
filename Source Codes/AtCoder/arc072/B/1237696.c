#include<stdio.h>
int main(){
  long long a,b;
  scanf("%lld %lld",&a,&b);
  printf("%s\n",a-b<-1||1<a-b?"Alice":"Brown");
  return 0;
} 