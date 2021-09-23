#include "stdio.h"

int main()
{
  float N;
  scanf("%4f%*[^\n]", &N);
  getchar();
  printf("%g", floor(N / 3));
  return 0;
} 