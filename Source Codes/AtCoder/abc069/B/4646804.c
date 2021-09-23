#include<stdio.h>

int main(){
    int len;
    char s[101];
    scanf("%s", s);

    for(len=0; s[len]!='\0'; len++);
    printf("%c%d%c", s[0], len-2, s[len-1]);
    return 0;
} 