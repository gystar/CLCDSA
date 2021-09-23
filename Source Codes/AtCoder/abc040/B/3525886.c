#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
  int n;
  scanf("%d", &n);
  int ans = 100000;
  
  for(int i = 1; i <= n; i++){
    for(int j = 1; i * j <= n; j++){
      ans = fmin(abs(i - j) + (n - i * j), ans);
    }
  }
  
  printf("%d\n", ans);
  
  return 0;
} 