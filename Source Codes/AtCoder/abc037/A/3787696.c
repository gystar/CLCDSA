#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
  
  long A, B, C;

  scanf("%ld%ld%ld", &A, &B, &C);

  if(A < B){
    printf("%ld\n", C / A);
  }else{
    printf("%ld\n", C / B);
  }
   
  return 0;
} 