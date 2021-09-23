#include <stdio.h>

int main() {
  int month, next_month;
  scanf("%d", &month);
  next_month = (month == 12)? 1 : month + 1;
  printf("%d\n", next_month);
  return 0;
} 