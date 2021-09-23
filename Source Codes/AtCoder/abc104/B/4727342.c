#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
    int n,i,C=0;
    char s[11];
    scanf("%s",s);
    n=strlen(s);
    if(s[0]=='A'){
        s[0]='a';
        for(i=2;i<n-1;i++){
            if(s[i]=='C'){
                C++;
                s[i]='c';
            }
        }
        if(C==1){
            for(i=0;i<n;i++){
                if(islower(s[i])==0){
                    printf("WA\n");
                    return 0;
                }
            }
            printf("AC\n");
            return 0;
        }
    }
    printf("WA\n");
    return 0;
} 