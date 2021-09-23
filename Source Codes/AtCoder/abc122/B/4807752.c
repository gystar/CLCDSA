#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[11];
  scanf("%s",str);

  int i;
  int current = 0;
  int max = 0;

  for(i = 0; i < strlen(str); i++)
    {
      switch (str[i]) {
        case 'A':
        case 'C':
        case 'G':
        case 'T':
          current++;
          break;
        default:
          max = (max > current ? max : current);
          current = 0;
          break;
      }
    }
  max = (max > current ? max : current);
  printf("%d\n", max);
  return 0;
} 