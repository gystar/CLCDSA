#include <stdio.h>

int main() {
  int i, N, min = 100, temp;
  scanf("%d", &N);
  for(i = 0; i < N; i++) {
    scanf("%d", &temp);
    min = (min > temp)? temp: min;
  }
  printf("%d\n", min);
  return 0;
} 