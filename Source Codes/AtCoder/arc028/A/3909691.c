#include<stdio.h>
int a,b,c;
int main()
{
    scanf("%d%d%d",&a,&b,&c);
    a%=(b+c);
    if(a>0&&a<=b)
    printf("Ant\n");
    else 
    printf("Bug\n");
    return 0;
} 