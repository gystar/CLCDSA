#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int m, n, N;

  scanf("%d%d%d", &m, &n, &N);

  int ans = N;

  while(N >= m){
    ans += (N / m) * n;
    N = (N % m) + (N / m) * n;
  }

  printf("%d\n", ans);
  
  return 0;
} 