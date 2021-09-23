#include <stdio.h>

int main(void) {
  int k, odd, even;
  scanf("%d", &k);
  even = k/2; odd = k - even;
  printf("%d\n", odd*even);
  return 0;
} 