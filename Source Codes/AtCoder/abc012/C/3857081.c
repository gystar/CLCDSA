#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int N, i;

  scanf("%d", &N);

  N = 2025 - N;

  for(i = 1; i <= 9; i++){
    if(N % i == 0 && N / i <= 9){
      printf("%d x %d\n", i, N / i);
    }
  }
   
  return 0;
} 