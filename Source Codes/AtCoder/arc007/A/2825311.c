#include <stdio.h>

int main(){
    char x,s[50];
    int i=0;

    scanf("%c",&x);
    scanf("%s",s);
    
    while(s[i]){
        if(s[i]!=x)putchar(s[i]);
        i++;
    }
    putchar('\n');
    return 0;
} 