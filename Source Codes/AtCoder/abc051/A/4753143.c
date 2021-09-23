#include <stdio.h>

int main()
{
  char s[20], *tp;
  scanf("%s", s);
  s[5] = ' ';
  s[13] = ' ';
  printf("%s", s);
  return 0;
} 