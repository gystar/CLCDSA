#include <stdio.h>
#include <math.h>

int main() {
  long N, k, c;
  scanf("%ld", &N);
  k = log10(N);
  c = N / pow(10, k);
  if (N - pow(10, k) * c == pow(10, k) - 1) {
    printf("%ld\n", c + 9 * k);
  } else {
    printf("%ld\n", c + 9 * k - 1);
  }
  return 0;
} 