#include <stdio.h>

int main()
{   int a,b;
    scanf("%d%d",&a,&b);
    if(b%a>0)
    printf("%d",b/a+1);
    else
    printf("%d",b/a);
    return 0;
} 