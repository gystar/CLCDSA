#include <stdio.h>

int main() {
  int N, i, max = 0, total = 0;
  scanf("%d", &N);
  int price[10];
  for(i = 0; i < N; i++) {
    scanf("%d", &price[i]);
    total += price[i];
    if(max < price[i]) {
      max = price[i];
    }
  }
  printf("%d\n", total - max / 2);
  return 0;
} 