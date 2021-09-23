#include <stdio.h>

int main() {
  int number_of_softwares, counter = 0, softwares_i, temp_bug, sum_bug = 0, ave_bug;
  scanf("%d", &number_of_softwares);
  for(softwares_i = 0; softwares_i < number_of_softwares; softwares_i++) {
    scanf("%d", &temp_bug);
    if(temp_bug == 0) {
      continue;
    }
    counter++;
    sum_bug += temp_bug;
  }
  ave_bug = (sum_bug % counter == 0)? sum_bug / counter : sum_bug / counter + 1;
  printf("%d\n", ave_bug);
  return 0;
} 