#include <stdio.h>

int main(void){
  long N;
  long long M;
  scanf("%ld%lld",&N,&M);

  for(int i = M/N;i > 0;i--){
    if(M%i == 0){
      printf("%d",i);
      return 0;
    }
  }
} 