#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  long long A, B, C;

  scanf("%lld%lld%lld", &A, &B, &C);

  long long K;

  scanf("%lld", &K);

  if(K % 2 == 0){
    printf("%lld\n", A - B);
  }else{
    printf("%lld\n", B - A);
  }
	  
  return 0;
} 