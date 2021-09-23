#include <stdio.h>

int main() {
  int number_of_flowers, sum_removing_petals = 0, flower_i, petals;
  scanf("%d", &number_of_flowers);
  for(flower_i = 0; flower_i < number_of_flowers; flower_i++) {
    scanf("%d", &petals);
    while((petals % 3 == 2) || (petals % 2 == 0)) {
      petals--;
      sum_removing_petals++;
    }
  }
  printf("%d\n", sum_removing_petals);
  return 0;
} 