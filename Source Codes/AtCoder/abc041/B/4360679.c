#include<stdio.h>

int main(void)
{
  long long a, b, c, d=1000000007, x;

  scanf("%lld%lld%lld", &a, &b, &c);

  x = (a%d * b%d * c%d);

  printf("%lld", x);
  return 0;

} 