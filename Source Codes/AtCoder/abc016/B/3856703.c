#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int A, B, C;

  scanf("%d%d%d", &A, &B, &C);

  if(A + B == C && A - B == C){
    printf("?\n");
  }else if(A + B == C){
    printf("+\n");
  }else if(A - B == C){
    printf("-\n");
  }else{
    printf("!\n");
  }
   
  return 0;
} 