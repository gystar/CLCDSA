#include <stdio.h>
int main(void){
    char s[6];
    int n;
    scanf("%s%d",s,&n);
    printf("%c%c\n",s[(n-1)/5],s[(n-1)%5]);
} 