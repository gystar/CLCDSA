#include <stdio.h>

int gcd(int a, int b) {
  int tmp;
  if(a < b) { tmp = a; a = b; b = tmp; }
  while(b != 0)
  {
    a %= b;
    tmp = a; a = b; b = tmp;
  }
  return a;
}

int main()
{
  int n; scanf("%d", &n);
  printf("%d\n", n*2/gcd(n, 2));
  return 0;
} 