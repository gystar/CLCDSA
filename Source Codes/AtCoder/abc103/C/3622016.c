#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(void){
  
  int N, i;

  scanf("%d", &N);

  long long a[N];
  long long sum = 0;

  for(i = 0; i < N; i++){
    scanf("%lld", &a[i]);
    sum += (a[i] - 1);
  }

  printf("%lld\n", sum);
  
  return 0;
} 