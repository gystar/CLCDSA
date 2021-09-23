#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
  
  int X;

  scanf("%d", &X);

  printf("%d\n", (X / 10) + (X % 10));
  
  return 0;
} 