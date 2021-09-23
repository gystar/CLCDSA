#include <stdio.h>
#include <string.h>
int main() {
  int A;
  int B;
  int C;
  scanf("%d %d %d",&A, &B, &C);
  int array[4];
  int temp;
  array[0] = A;
  array[1] = B;
  array[2] = C;
  int i,j;

  for (i = 0; i < 2; ++i) {
    for	(j = i + 1; j < 3; ++j) {
      if (array[i] < array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  int output = 10*array[0] + array[1] +array[2];
  printf("%d\n",output);
  return 0;
} 