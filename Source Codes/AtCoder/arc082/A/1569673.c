#include <stdio.h>
#include <stdlib.h>

int main() {
  int a[100002];
  int b;
  int i, j, N;
  int *p;

  for (i = 0; i < 100002; i++) {
    a[i] = 0;
  }

  scanf("%d", &N);
  p = (int*)malloc(sizeof(int) * N);

  for (int i = 0; i < N; i++) {
    scanf("%d", (p + i));
  }

  for (i = 0; i < N; i++) {
    b = *(p + i);
    a[b]++;
    a[b - 1]++;
    a[b + 1]++;
  }

  int max = 0;
  for (int i = 0; i < 100002; i++) {
    if (max < a[i]) {
      max = a[i];
    }
  }

  printf("%d\n", max);

  return 0;
} 