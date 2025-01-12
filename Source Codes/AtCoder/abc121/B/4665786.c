#include <stdio.h>

#define MAX 20

int main()
{
  int n, m, c, b[MAX], a[MAX][MAX];
  int i, j, ans, count = 0;

  scanf("%d%d%d", &n, &m, &c);

  for (i = 0; i < m; i++) {
    scanf("%d", &b[i]);
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  for (i = 0; i < n; i++) {
    ans = 0;
    for (j = 0; j < m; j++) {
      ans += a[i][j] * b[j];
    }
    if (ans + c > 0) {
      count++;
    }
  }

  printf("%d\n", count);

  return 0;
} 