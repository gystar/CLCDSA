#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
  
  int A, B, C, D;

  scanf("%d%d%d%d", &A, &B, &C, &D);

  if((B * C) < (A * D)){
    printf("AOKI\n");
  }else if((B * C) > (A * D)){
    printf("TAKAHASHI\n");
  }else{
    printf("DRAW\n");
  }
  
  return 0;
} 