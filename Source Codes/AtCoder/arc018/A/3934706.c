#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  double H, B;

  scanf("%lf %lf", &H, &B);

  printf("%.3f\n", B * H * H / 10000);
   
  return 0;
} 