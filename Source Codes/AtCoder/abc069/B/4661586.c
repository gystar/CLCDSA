#include <stdio.h>
#include <string.h>
int main(void){
    char s[101];
    int n;
    scanf("%s",s);
    n=strlen(s);
    printf("%c%d%c\n",s[0],n-2,s[n-1]);
    return 0;
} 