#include <stdio.h>

int main(){
    char s[50];
    scanf("%s",&s);
    for (int i=0;i<50;i++){
        if (s[i+1]=='\0'){
            if (s[i]=='T'){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
            break;
        }        
    }
    return 0;
} 