#include <stdio.h>
#include <string.h>
int main(void){
    int n,i;
    char s[1001];
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i] && s[i]!='*' && s[n-1-i]!='*'){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
} 