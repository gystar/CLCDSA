#include <stdio.h>

int main()
{
  int N, T;
  int c[101];
  int t[101];

  int min = 100;
  c[min] = 100000000;
  scanf("%d %d", &N, &T);
  for (int i = 0; i < N; i++) {
    scanf("%d %d", &c[i], &t[i]);
    if (t[i] <= T && c[i] < c[min])
      min = i;
  }
  if (min == 100)
    puts("TLE");
  else
    printf("%d\n", c[min]);
  return 0;
} 