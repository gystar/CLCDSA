#include <stdio.h>

int main(void){
  long long A,K;
  scanf("%lld%lld",&A,&K);

  if(K == 0) printf("%lld\n",2000000000000-A);
  else{
    for(int i = 0;;i++){
      A += 1+A*K;
      if(A >= 2000000000000){
        printf("%d\n",i+1);
        break;
      }
    }
  }

  return 0;
} 