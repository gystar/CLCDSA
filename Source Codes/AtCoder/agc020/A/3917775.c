#include<stdio.h>
int n,a,b;
int main()
{
    scanf("%d%d%d",&n,&a,&b);
    if((b-a)%2==0)
    puts("Alice");
    else
    puts("Borys");
    return 0;
} 