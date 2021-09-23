#include <stdio.h>
#include <string.h>
int main(void){
    char x,s[60];
    scanf("%c%s",&x,s);
    for (int i=0; i<strlen(s); i++){
        if (s[i]!=x){
            printf("%c",s[i]);
        }
    }
    printf("\n");
    return 0;
} 