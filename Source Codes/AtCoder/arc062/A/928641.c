#include<stdio.h>

#define MAX(x,y) (((x)>(y))?(x):(y))

int main(void){
  long long nowT,nowA,N,T,A;
  long long coef;

  scanf("%d",&N);
  scanf("%lld%lld",&nowT,&nowA);
  while(--N){
    scanf("%lld%lld",&T,&A);
    if(nowT%T!=0) nowT+=T-nowT%T;
    if(nowA%A!=0) nowA+=A-nowA%A;
    coef=MAX(nowT/T,nowA/A);
    nowT=T*coef;
    nowA=A*coef;
  }
  printf("%lld\n",nowT+nowA);
  return 0;
} 