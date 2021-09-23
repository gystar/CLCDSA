#include<stdio.h>

const long long int MAX = 2e12;
int main(void)
{
  long long int a, k, t, c  = 0;
  scanf("%lld %lld", &a, &k);
  t = a;
  if (a >= MAX){
    c = 0;
  }
  else if (k != 0) {
    while (t < MAX) {
      t = t + (t * k) + 1;
      c++;
    }
  }
  else {
    c = MAX - a;
  }
  printf("%lld\n", c);

  return (0);
} 