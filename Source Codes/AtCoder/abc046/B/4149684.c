#include <stdio.h>
#include <math.h>

int main(void){
  int n, k;
  scanf("%d %d", &n, &k);
  double c = pow(k - 1, n - 1);
  k *= c;
  n = (int) k;
  printf("%d\n", n);
  return 0;
} 