#include <stdio.h>
#include <string.h>

int main(void){
    char s[101];
    
    scanf("%s",s);
    printf("%c%lu%c", s[0], strlen(s)-2, s[strlen(s)-1]);
} 