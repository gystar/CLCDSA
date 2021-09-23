#include<stdio.h>
#include<string.h>
char s[1001];
int main ()
{
    char x; 
    scanf("%c",&x);
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {if(s[i]==x)
    continue;   
    else
    printf("%c",s[i]);}
    printf("\n");
    return 0;
} 