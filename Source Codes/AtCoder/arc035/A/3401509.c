#include <stdio.h>
#include <string.h>
int main(void){
    char s[1020];
    scanf("%s",s);
    for (int i=0; i<(strlen(s)+1)/2; i++){
        if (s[i]!=s[strlen(s)-1-i] && s[i]!='*' && s[strlen(s)-1-i]!='*'){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
} 