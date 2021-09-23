#include<stdio.h>

int main(){
  long a,b;
  scanf("%lld%lld",&a,&b);
  if(a<0&&b>0)printf("%lld\n",b-a-1);
  else printf("%lld\n",b-a);
  return 0;
} 