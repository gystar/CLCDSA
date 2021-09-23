#include <stdio.h>
int main() {
  int input;
  scanf("%d", &input);
  int even, odd;
  int count = 0;

  for (even = 2; even <= input; even += 2) {
     for (odd = 1; odd <= input; odd += 2) {
       ++count;
     }
  }
  printf("%d\n",count);

  return 0;
} 