#include <stdio.h>
#define MAX(A, B) (((A) < (B)) ? (B) : (A))
#define MIN(A, B) (((A) < (B)) ? (A) : (B))

int main() {
  int a, b;
  int c=0;
  scanf("%d %d", &a, &b);
  b -= a;
  b = MAX(b, 0-b);
  while (b > 7) {
    b -= 10;
    c += 1;
  }
  if (b > 3) {
    b -= 5;
    c += 1;
  }
  c += MAX(b, 0-b);
  printf("%d\n", c);
  return 0;
} 