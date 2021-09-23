#include <stdio.h>
#include <stdlib.h>

int main() {
  int N, r = 0;
  int i, j;
  int *m, *n;

  scanf("%d", &N);
  m = (int*)malloc(sizeof(int) * N);
  n = (int*)malloc(sizeof(int) * N);
  for (i = 0; i < N; i++) {
    scanf("%d", (m + i));
  }

  for (i = 0; i < N - 1; i++) {
    if ((i + 1) == *(m + i)) {
      j = *(m + i);
      *(m + i) = *(m + i + 1);
      *(m + i + 1) = j;
      r++;
    }
  }

  for (i = N - 1; i > 0; i--) {
    if ((i + 1) == *(m + i)) {
      j = *(m + i);
      *(m + i) = *(m + i -1);
      *(m + i - 1) = j;
      r++;
    }
  }
  printf("%d\n", r);
  return 0;
} 