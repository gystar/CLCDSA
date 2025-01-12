#include <stdio.h>

int main(void)
{
  int n, a, b, c;
  scanf("%d %d %d %d", &n, &a, &b, &c);
  int l[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &l[i]);
  }
  int ans = 10000;
  for (int i = 0; i < (1U << (n * 2)); i++) {
    int mp = 0;
    int bamboo[4] = {};
    for (int m = 0; m < n; m++) {
      int ix = (i & (3U << (m * 2))) >> (m * 2);
      if (ix != 0) {
        bamboo[ix] += l[m];
        mp += 10;
      }
    }
    if (bamboo[1] == 0 || bamboo[2] == 0 || bamboo[3] == 0) continue;
    mp += bamboo[1] > a ? bamboo[1] - a : a - bamboo[1];
    mp += bamboo[2] > b ? bamboo[2] - b : b - bamboo[2];
    mp += bamboo[3] > c ? bamboo[3] - c : c - bamboo[3];
    mp -= 30;
    if (ans > mp) ans = mp;
  }
  printf("%d\n", ans);
} 