#include <stdio.h>

int main() {
  int ch;
  scanf("%c", &ch);
  ch = ch - 'A' + 1;
  printf("%d\n", ch);
  return 0;
} 