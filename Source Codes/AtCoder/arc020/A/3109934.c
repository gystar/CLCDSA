#include<stdio.h>
int a,b;
int main()
{
    scanf("%d%d",&a,&b);
    if(a<0)
    a=-a;
    if(b<0)
    b=-b;
    if(a>b)
    printf("Bug\n");
    else if(a==b)
    printf("Draw\n");
    else 
    printf("Ant\n");
} 