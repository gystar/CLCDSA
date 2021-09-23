#include <stdio.h>

int main() {
  int number_a, number_b, answer;
  scanf("%d", &number_a);
  scanf("%d", &number_b);
  answer = (number_b - (number_a % number_b)) % number_b;
  printf("%d\n", answer);
  return 0;
} 