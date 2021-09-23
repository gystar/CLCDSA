#include <stdio.h>
#include <string.h>
int main(void){
    // Your code here!
    char s[51];
    scanf("%s",s);
    if(s[strlen(s)-1]=='T') printf("YES");
    else printf("NO");
} 