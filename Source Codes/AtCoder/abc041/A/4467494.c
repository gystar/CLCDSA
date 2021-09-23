#include<stdio.h>
int main(void)
{
  char s[101];
  int n;
  scanf("%s", s);
  scanf("%d", &n);
  printf("%c\n", s[n-1]);
  return 0;
} 