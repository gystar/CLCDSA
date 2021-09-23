#include <stdio.h>
int main(void){
    char s[3][101];
    scanf("%s%s%s",s[0],s[1],s[2]);
    printf("%c%c%c\n",s[0][0],s[1][0],s[2][0]);
    return 0;
} 