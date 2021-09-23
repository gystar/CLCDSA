#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int h, m;

  scanf("%d%d", &h, &m);

  printf("%d\n", ((17 - h) * 60) + (60 - m));
  
  return 0;
} 