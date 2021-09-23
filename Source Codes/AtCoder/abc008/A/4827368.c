#include <stdio.h>

int main() {
  int sum_of_pictures, start_number, end_number;
  scanf("%d %d", &start_number, &end_number);
  sum_of_pictures = end_number - start_number + 1;
  printf("%d\n", sum_of_pictures);
  return 0;
} 