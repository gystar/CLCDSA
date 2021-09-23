#include<stdio.h>

int main()
{
  unsigned long long int N, A, B;
  int X[100000];

  scanf("%lld %lld %lld", &N, &A, &B);
  int i;
  for (i = 0; i < N; i++)
    scanf("%d", &X[i]);
  unsigned long long int ans = 0;
  unsigned long long int tmp;
  for (i = 1; i < N; i++) {
    tmp = A * (X[i] - X[i-1]);
    if ( tmp > B)
      ans += B;
    else
      ans += tmp;
  }
  printf("%lld\n", ans);
  return 0;
} 