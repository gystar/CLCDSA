#include <stdio.h>
int main(void){
    // Your code here!
    char s[2];
    scanf("%s",s);
    if(s[0]=='a' && s[1]=='\0')
        printf("-1\n");
    else
        printf("a\n");
} 