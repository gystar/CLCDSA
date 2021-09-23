#include<stdio.h>

int main() {
  int n, i;
  int p[100010];
  scanf("%d", &n);
  for (i = 1; i < n+1; i++) {
    scanf("%d", &p[i]);
  }
  int count = 0;
  for (i = 1; i < n+1; i++) {
    if (p[i] == i) {
      int oldpi = p[i];
      p[i] = p[i+1];
      p[i+1] = oldpi;
      count += 1;
    }
  }
  printf("%d", count);
  return 0;
} 