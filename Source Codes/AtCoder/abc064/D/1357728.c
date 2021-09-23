#include <stdio.h>
int main(void)
{
  int n, i, x=0, y=0;
  char s[102];
  
  scanf("%d", &n);
  scanf("%s", s);
  for(i = 0; i < n; i++){
    if(s[i] == '(') x++;
    else if(x > 0) x--;
    else y++;
  }

  for(i = 0; i < y; i++)
    printf("(");
  printf("%s", s);

  for(i = 0; i < x; i++)
    printf(")");

  return 0;
} 