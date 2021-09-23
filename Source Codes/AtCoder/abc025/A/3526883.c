#include <stdio.h>

int main(void){
    char s[6];
    int a,b,c;
    scanf("%s%d",s,&a);
    b=(a-1)/5;
    c=(a-1)%5;
    printf("%c%c\n",s[b],s[c]);
    return 0;
} 