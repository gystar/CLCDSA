#include <stdio.h>

double diff(double a, double b)
{
  return (a > b) ? a - b : b - a;
}

int main(void)
{
  int n;
  int t, a;
  int h[1000];

  scanf("%d", &n);
  scanf("%d %d", &t, &a);
  for (int i = 0; i < n; i++)
    scanf("%d", &h[i]);

  double min = diff((double)a, t - h[0] * 0.006);
  int ans = 1;
  for (int i = 1; i < n; i++) {
    if (diff((double)a, t - h[i] * 0.006) < min) {
      min = diff((double)a, t - h[i] * 0.006);
      ans = i + 1;
    }
  }
  printf("%d\n", ans);
  return 0;
  
} 