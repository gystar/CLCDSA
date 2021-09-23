#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define inf 1072114514

int min(int a, int b)
{
  if (a < b)
  {
    return a;
  }
  return b;
}

int sortfncsj(const void *a, const void *b)
{
  if (*(int *)a > *(int *)b)
  {
    return 1;
  }
  if (*(int *)a == *(int *)b)
  {
    return 0;
  }
  return -1;
}

int main(void)
{
  int i, n, k, a[524288], r = inf;
  scanf("%d%d", &n, &k);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  qsort(a, n, sizeof(int), sortfncsj);
  for (i = k - 1; i < n; i++)
  {
    r = min(r, a[i] - a[i - k + 1]);
  }
  printf("%d\n", r);
  return 0;
} 