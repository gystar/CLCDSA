#include <stdio.h>

int main() {
  int number_a, number_b, number_c, flag = 0;
  scanf("%d %d %d", &number_a, &number_b, &number_c);
  if(number_a + number_b == number_c) {
    flag += 1;
  }
  if(number_a - number_b == number_c) {
    flag += 2;
  }
  switch(flag) {
    case 0:
      printf("!\n");
      break;
    case 1:
      printf("+\n");
      break;
    case 2:
      printf("-\n");
      break;
    case 3:
      printf("?\n");
      break;
  }
  return 0;
} 