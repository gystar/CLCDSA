#include<stdio.h>

int main(){
  long long R,B;//????
  long long x,y;//????????

  long long high,low;//???
  long long K;
  scanf("%lld%lld%lld%lld",&R,&B,&x,&y);
  high=(R>B?R:B);
  low=0;

  //  printf("%lld %lld %lld %lld\n",R,B,x,y);
  //????
  while(high-low>1){
    K=(high+low)/2;
    if(R>=K && B>=K &&  (R-K)/(x-1)+(B-K)/(y-1) >= K){
      low = K;//K????????????
    }else{
      high = K;//K????????????
    }
  }
  printf("%lld\n",low);
  return 0;
} 