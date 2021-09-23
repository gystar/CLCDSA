#include <stdio.h>

int main(void) {
  int N;
  scanf("%d", &N);

  double SUM = 0;
  for(int i = 1; i <= N; i++) {
    SUM += (i * 10000 * 1) / (double)N;
  }
  printf("%0.0f\n", SUM);
  
  return 0;
} 