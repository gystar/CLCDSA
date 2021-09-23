#include <stdio.h>
#include <string.h>
int main(void){
    int ans=-1;
    char s[15];
    scanf("%s",s);
    for (int i=0; i<strlen(s); i++){
        if (ans==-1 || ans>10){
            ans=s[i]-'0';
        } else {
            if (s[i]-'0'<10){
                ans=ans*10+s[i]-'0';
            }
            break;
        }
    }
    printf("%d\n",ans);
} 