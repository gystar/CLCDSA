#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int N, i;
  int t = 0;
  int sum = 0;

  scanf("%d", &N);

  int A[N];

  for(i = 0; i < N; i++){
    scanf("%d", &A[i]);
    if(A[i] != 0){
      t++;
      sum += A[i];
    }
  }

  if(sum % t == 0){
    printf("%d\n", sum / t);
  }else{
    printf("%d\n", sum / t + 1);
  }
   
  return 0;
} 