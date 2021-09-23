#include<stdio.h>

int main(){
  int N,i;
  long long int T,A,TRatio,ARatio,j,k;

  scanf("%d",&N);
  scanf("%lld %lld",&T,&A);
  for(i=1;i<N;++i){
    scanf("%lld %lld",&TRatio,&ARatio);
    j=T/TRatio;
    if(T%TRatio) ++j;
    k=A/ARatio;
    if(A%ARatio) ++k;
    if(j>k){
      T=TRatio*j;A=ARatio*j;
    }
    else{
      T=TRatio*k;A=ARatio*k;
    }
  }
  printf("%lld\n",T+A);

  return 0;
} 