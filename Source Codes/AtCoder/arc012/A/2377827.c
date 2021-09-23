#include<stdio.h>
char a[16];
int main(void)    
{
    gets(a);
    if(a[0]=='M')puts("5");
    else if(a[0]=='T'&&a[1]=='u')puts("4");
    else if(a[0]=='W')puts("3");
    else if(a[0]=='T'&&a[1]=='h')puts("2");
    else if(a[0]=='F')puts("1");
    else if(a[0]=='S')puts("0");
    return 0;
} 