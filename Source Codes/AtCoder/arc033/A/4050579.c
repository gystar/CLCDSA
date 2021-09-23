#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int N, i;
  int sum = 0;

  scanf("%d", &N);

  for(i = 1; i <= N; i++){
    sum += i;
  }

  printf("%d\n", sum);
  
  return 0;
} 