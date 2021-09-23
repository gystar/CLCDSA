#include<stdio.h>
int main()
{
    int  a, b, x, z;
    float p;
    scanf("%d %d", &a, &b);
     z = (a + b) %2;
    if(z==0){
      x=(a+b)/2;
     printf("%d\n", x);
     }
    else
    {
     p = 1+a+b;
     x = p/2;
     printf("%d\n", x);
    }
     return 0;
} 