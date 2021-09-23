#include <stdio.h>

int main(void){
  double n, m;
  scanf("%lf %lf", &n, &m);
  double degree;
  if(n > 12){
    n = n - 12;
  }
  n = n * 30 + m * 0.5;
  m = m * 6;
  if(m > n){
    degree = m - n;
  }else{
    degree = n - m;
  }
  if(degree <= 180){
    printf("%lf\n", degree);
  }else{
    printf("%lf\n", 360 - degree);
  }
} 