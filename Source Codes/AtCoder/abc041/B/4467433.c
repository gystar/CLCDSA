#include<stdio.h>
int main(void)
{
  int a, b, c, x, ans;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d", (long long)a*b%1000000007*c%1000000007);
  return 0;
} 