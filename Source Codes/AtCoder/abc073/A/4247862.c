#include <stdio.h>

int main()
{
  char n[3];
  scanf("%s",n);
  if(n[0]=='9' || n[1]=='9') puts("Yes");
  else puts("No");
  return 0;
} 