#include<stdio.h>

int main(void)
{
  int n, i, x=0, y=0;
  char s[101];

  scanf("%d", &n);

  for(i=0;i<n;i++)
  {
    scanf("%s", &s[i]);
    if(s[i] == 'I')
      x++;
    else if(s[i] == 'D')
      x--;

    if(y < x)
      y = x;
  }
  printf("%d\n", y);
  return 0;
} 