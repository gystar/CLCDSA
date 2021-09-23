#include<stdio.h>

int main(void)
{
  int a, b, c, d, x;

     scanf("%d%d%d", &a, &b, &c);

     x = b / a;

        if(x <= c)
          printf("%d\n", x);

        else
          printf("%d\n", c);


return 0;
} 