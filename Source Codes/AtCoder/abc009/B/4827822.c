#include <stdio.h>

int main() {
  int number_of_menu, most_expensive_dish = 0, second_most_expensive_dish = 0, menu_i, temp_menu_price;
  scanf("%d", &number_of_menu);
  for(menu_i = 0; menu_i < number_of_menu; menu_i++) {
    scanf("%d", &temp_menu_price);
    if(most_expensive_dish == temp_menu_price) {
      continue;
    } else if(most_expensive_dish < temp_menu_price) {
      second_most_expensive_dish = most_expensive_dish;
      most_expensive_dish = temp_menu_price;
    } else if(second_most_expensive_dish < temp_menu_price) {
      second_most_expensive_dish = temp_menu_price;
    }
  }
  printf("%d\n", second_most_expensive_dish);
  return 0;
} 