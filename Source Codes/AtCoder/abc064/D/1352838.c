#include <stdio.h>

int main()
{
  int n, i, j, k;
  int x = 0;
  int y = 0;
  char s[100] = {};

  scanf("%d", &n);

  for(i=0; i<n; i++)
  {
    scanf("%s", &s[i]);
    if(s[i] == '(')
    {
      x++;
    }
    else
    {
      if(x > 0)
      {
        x--;
      }
      else
      {
        y++;
      }
    }
  }
  for(j=0; j<y; j++)
  {
    printf("(");
  }
  printf("%s", s);
  for(k=0; k<x; k++)
  {
    printf(")");
  }
} 