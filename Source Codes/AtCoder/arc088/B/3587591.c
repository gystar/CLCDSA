#include <stdio.h>
#include <string.h>
int min(int a,int b){return a<b?a:b;}
int max(int a,int b){return a>b?a:b;}
int main(void){
    char s[100020];
    scanf("%s",s);
    int ans=strlen(s);
    for (int i=1; i<strlen(s); i++){
        if (s[i]==s[i-1]){
        } else {
            ans=min(ans,max(i,strlen(s)-i));
        }
    }
    printf("%d\n",ans);
    return 0;
} 