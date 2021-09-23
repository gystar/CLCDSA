#include <stdio.h>

int main(void) {
  int a, b, c, i, N;
  for (i = 0, scanf("%d%d",&N,&a); i < N && scanf("%d",&b); i++) {
    while (b) {
      c = b;
      b = a%b;
      a = c;
    }
  }
  printf("%d",a);
  return 0;
} 