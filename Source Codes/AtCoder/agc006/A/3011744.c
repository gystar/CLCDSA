#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101],t[101];
    int n,i,j;
    scanf("%d%s%s",&n,s,t);
    for(i=strlen(s);i>0;i--){
        for(j=0;i>j;j++)if(s[strlen(s)-i+j]!=t[j])break;
        if(j==i)break;
    }
    printf("%d",strlen(s)*2-i);
    return 0;
} 