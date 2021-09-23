#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(void){
  
  long long N;
  long long i;
  long long c = 0;

  scanf("%lld", &N);

  long long a[N];

  for(i = 0; i < N; i++){
    scanf("%lld", &a[i]);
    while(a[i] % 2 == 0){
      a[i] /= 2;
      c++;
    }
  }

  printf("%lld\n", c);
  
  return 0;
} 