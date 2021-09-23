#include <stdio.h>
#include <string.h>

int
main(int argc, char *argv[])
{
  char s[201];
  scanf("%s", s);
  
  int n = strlen(s);
  
  printf("%c%d%c\n", s[0], n - 2, s[n - 1]);
  
  return 0;
} 