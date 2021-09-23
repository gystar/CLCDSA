#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int H, W;

  scanf("%d%d", &H, &W);

  printf("%d\n", (H - 1) * W + H * (W - 1));
  
  return 0;
} 