#include <stdio.h>
 
int main(void)
{
  int a, b, c, d;
 
  scanf("%d %d %d", &a, &b, &c);
 
  if( a == b ) {
    d = c;
  } else if( b == c ) {
    d = a;
  } else {
    d = b;
  }
 
  printf("%d\n", d);
  
  return 0;
} 