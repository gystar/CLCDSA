#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  long long N, M;

  scanf("%lld%lld", &N, &M);

  if(M >= 2 * N){
    printf("%lld\n", N + (M - 2 * N) / 4);
  }else{
    printf("%lld\n", M / 2);
  }
	
  return 0;
} 