#include<stdio.h>
int n,s=1;
int main()
{
    scanf("%d",&n);
    s=n/10*100;
    if(n%10)
    {if(n%10<7)
    s+=n%10*15;
    else
    s+=100;}
    printf("%d\n",s);
    return 0;
} 