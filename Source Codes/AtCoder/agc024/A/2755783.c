#include <stdio.h>
#include <math.h>

int main(void) {
  long long int a, b, c, k, sum1, sum2, sum3;
  long long int big;

  big = (long)pow(10.0,18.0);

  scanf("%d %d %d %d", &a, &b, &c, &k);

  if (((a - b) > big) || ((a - b) < -big)) {
    printf("Unfare\n");
    return 1;
  }else if (((b - a) > big) || ((b - a) < -big)) {
    printf("Unfare\n");
    return 1;
  }

  if (k % 2 == 0) {
    printf("%d\n", a - b);
  }else {
    printf("%d\n", b - a);
  }

  return 0;
} 