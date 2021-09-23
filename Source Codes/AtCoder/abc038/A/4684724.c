#include <stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",s);
    int length = strlen(s);
    if(s[length-1] == 'T')printf("YES\n");
    else printf("NO\n");
} 