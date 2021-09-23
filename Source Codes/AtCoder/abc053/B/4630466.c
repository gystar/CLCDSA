#include <stdio.h>
#include <string.h>
int main(void){
    char s[200001];
    int i,j;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        if(s[i]=='A'){
            for(j=strlen(s)-1;j>i;j--){
                if(s[j]=='Z'){
                    printf("%d\n",j-i+1);
                    return 0;
                }
            }
        }
    }
    return 0;
} 