#include <stdio.h>
#include <math.h>
 
int main(void) {
 int a;
  scanf("%d",&a);
  if (a % 2 == 0) {
  printf("%d",a/2 * a/2);
  } else {
    printf("%d", a/2 * (a/2 + 1));
  }
  return 0;
} 