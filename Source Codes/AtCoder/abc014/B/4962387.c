#include <stdio.h>

int main() {
  int number_of_items, x, i, flag_items, sum = 0;
  scanf("%d %d", &number_of_items, &x);
  int price[number_of_items + 1];
  for(i = 0; i < number_of_items; i++) {
    scanf("%d", &price[i]);
    flag_items = x & 1;
    x /= 2;
    if(flag_items == 1) {
      sum += price[i];
    }
  }
  printf("%d\n", sum);
  return 0;
} 