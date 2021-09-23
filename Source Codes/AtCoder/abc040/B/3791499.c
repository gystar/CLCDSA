#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){
  
  int n, i, p, q;
  int min = 100000;

  scanf("%d", &n);

  for(i = sqrt(n); i <= n; i++){
    p = n / i;
    q = n % i;
    if(i - p + q < min && i - p + q >= 0){
      min = i - p + q;
    }
  }

  printf("%d\n", min);
  
  return 0;
} 