#include <stdio.h>
#include <math.h>

int main(void){
  double n;
  scanf("%lf", &n);
  
  printf("%.0f\n", sqrt(sqrt(n)));
  
  return 0;
} 