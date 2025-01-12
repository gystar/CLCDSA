#include <stdio.h>

int max(int a, int b)
{
  return a > b ? a : b;
}

int main()
{
  long long n, k;
  scanf("%lld%lld", &n, &k);
  long long total = 0;
  if(k == 0) {
    printf("%lld\n", n*n);
    return 0;
  }
  for(int b = k+1; b <= n; b++) {
    total += (n / b) * (b - k) + max(n % b - k + 1, 0);
  }
  printf("%lld\n", total);
  return 0;
} 