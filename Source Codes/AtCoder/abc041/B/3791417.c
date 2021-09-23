#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
  
  long long A, B, C;

  scanf("%lld%lld%lld", &A, &B, &C);

  printf("%lld\n", (((A * B) % 1000000007) * C) % 1000000007);
  
  return 0;
} 