#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  if(a*b%2 == 0) { printf("No\n"); } else { printf("Yes\n"); }
  return 0;
} 