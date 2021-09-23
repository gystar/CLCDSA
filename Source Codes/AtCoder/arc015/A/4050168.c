#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int n;

  scanf("%d", &n);

  printf("%.8f\n", (double)(n * 1.8) + 32);
  
  return 0;
} 