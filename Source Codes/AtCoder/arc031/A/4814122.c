#include <stdio.h>
#include <string.h>
int main(void){
    char s[101];
    int i,n;
    scanf("%s",&s);
    n=strlen(s);
    for(i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
} 