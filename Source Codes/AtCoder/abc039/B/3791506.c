#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
  
  long N;

  scanf("%ld", &N);

  printf("%.0f\n", sqrt(sqrt(N)));
  
  return 0;
} 