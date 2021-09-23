#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int N, i;
  int sum = 0;

  scanf("%d", &N);

  int a[N], b[N];

  for(i = 0; i < N; i++){
    scanf("%d%d", &a[i], &b[i]);
    sum += a[i] * b[i];
  }

  sum *= 1.05;

  printf("%d\n", (int)sum);
  
  return 0;
} 