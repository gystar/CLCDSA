#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int A, B;

  scanf("%d%d", &A, &B);

  if(abs(A) == abs(B)){
    printf("Draw\n");
  }else if(abs(A) < abs(B)){
    printf("Ant\n");
  }else{
    printf("Bug\n");
  }
  
  return 0;
} 