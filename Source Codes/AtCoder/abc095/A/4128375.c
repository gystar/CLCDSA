#include <stdio.h>

int main()
{
  int b = 700;
  char a;
  for (int i = 3; i; i--)
  {
    scanf("%c", &a);
    if (a == 'o')
      b += 100;
  }
  printf("%d\n", b);

  return 0;
} 