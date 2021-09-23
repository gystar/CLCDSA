#include <stdio.h>

int main(void) {
  long long A, B, C;
  scanf("%lld%lld%lld\n", &A, &B, &C);
  if (A+B<C) printf("%lld\n", A+1+2*B);
  else printf("%lld\n", C+B);
  return 0;
} 