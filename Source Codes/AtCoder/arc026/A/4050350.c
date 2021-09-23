#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int N, A, B;

  scanf("%d%d%d", &N, &A, &B);

  if(N <= 5){
    printf("%d\n", B * N);
  }else{
    printf("%d\n", (B * 5) + (A * (N - 5)));
  }
  
  return 0;
} 