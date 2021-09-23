#include <stdio.h>
int main()
{
  char op;
  int a, b;
  scanf("%d %c %d", &a, &op, &b);
  if(op == '+')
    printf("%d", a+b);
  else if(op == '-')
    printf("%d", a-b);
  
  return 0;
} 