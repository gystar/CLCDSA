#include <stdio.h>
typedef unsigned long long llu;

int main() {
  
  int n;
  llu x;
  scanf("%d", &n);
  scanf("%llu", &x);
  
  llu a[51][2] = {{1, 1}};
  for (int i=0; i<n; i++) {
    a[i+1][0] = a[i][0]*2 + 3;
    a[i+1][1] = a[i][1]*2 + 1;
  }
  
  llu c = 0;
  while (n+1) {
    if (x == a[n][0]) {
      c += a[n][1];
      break;
    }
    x -= 1;
    n -= 1;
    if (x > a[n][0]) {
      c += 1 + a[n][1];
      x -= 1 + a[n][0];
    }
    if (x == 0)
      break;
  }
  
  printf("%llu\n", c);
  
  return 0;
} 