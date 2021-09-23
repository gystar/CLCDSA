#include<stdio.h>
#include<string.h>

int main(){
    char s[200001];
    unsigned int i,j;

    scanf("%s",s);

    for(i=0;i<strlen(s);i++){
        if(s[i]=='A'){
            for(j=strlen(s);i<j;j--){
                if(s[j]!='Z'){

                }else{break; }
            }
            break;
        }
    }
    printf("%d",j-i+1);
    return 0;
} 