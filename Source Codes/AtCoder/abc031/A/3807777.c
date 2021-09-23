#include <stdio.h>

int main(){
  int a, d, x, y;

  scanf("%d %d", &a, &d);

  x = (a + 1) * d;
  y = a * (d + 1);

  if (x >= y) {
    printf("%d\n", x);
  }
  else {
    printf("%d\n", y);
  }

  return 0;
} 