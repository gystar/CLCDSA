#include <stdio.h>

int main()
{
  int a,b,c, ans;
  scanf("%d %d %d", &a, &b, &c);
  
  if(a == b && b == c)
    ans = 1;
  else if(a == b || a == c || b == c)
    ans = 2;
  else
    ans = 3;
  printf("%d", ans);
  
  return 0;
} 