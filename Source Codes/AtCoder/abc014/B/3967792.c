#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  long n, X, i;
  long sum = 0;

  scanf("%ld%ld", &n, &X);

  long a[n], b[n];

  for(i = 0; i < n; i++){
    scanf("%ld", &a[i]);
  }

  for(i = 0; i < n; i++){
    b[i] = (X / (long)pow(2, i)) % 2;
  }

  for(i = 0; i < n; i++){
    sum += a[i] * b[i];
  }

  printf("%ld\n", sum);
  
  return 0;
} 