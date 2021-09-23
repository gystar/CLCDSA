#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  long long N, K, i, j, sum = 0;

  scanf("%lld%lld", &N, &K);

  long long a[N];

  for(i = 0; i < N; i++){
    scanf("%lld", &a[i]);
  }

  for(i = 0; i < N - K + 1; i++){
    for(j = 0; j < K; j++){
      sum += a[i + j];
    }
  }

  printf("%lld\n", sum);
  
  return 0;
} 