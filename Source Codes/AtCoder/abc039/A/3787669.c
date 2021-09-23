#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
  
  int A, B, C;

  scanf("%d%d%d", &A, &B, &C);

  printf("%d\n", 2 * (A * B + B * C + C * A));
   
  return 0;
} 