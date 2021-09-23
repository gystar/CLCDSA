#include <stdio.h>

int main() {
  int N, i, memo;
  int A, T, min = 100000000;
  int H[1000], temp[1000];
  scanf("%d", &N);
  scanf("%d %d", &T, &A);
  for(i = 0; i < N; i++) {
    scanf("%d", &H[i]);
    temp[i] = 1000 * T - 6 * H[i] - 1000 * A;
    if(temp[i] < 0) {
       temp[i] *= -1;
    }
    if(min > temp[i]) {
      min = temp[i];
      memo = i + 1;
    }
  }
  printf("%d\n", memo);
  return 0;
} 