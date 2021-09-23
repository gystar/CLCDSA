#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int N, i;
  int max = 1, semimax = 0;

  scanf("%d", &N);

  int A[N];

  for(i = 0; i < N; i++){
    scanf("%d", &A[i]);
    if(A[i] > max){
      semimax = max;
      max = A[i];
    }else if(A[i] < max && A[i] > semimax){
      semimax = A[i];
    }
  }

  printf("%d\n", semimax);
  
  return 0;
} 