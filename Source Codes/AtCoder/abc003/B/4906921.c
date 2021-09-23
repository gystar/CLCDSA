#include<stdio.h>
    #include<string.h>
    int main(void){
    int A,B,cou;
    char S[10],s[10];
    scanf("%s",S);
    scanf("%s",s);
    for(int i=0;i<strlen(S);i++){
        if(S[i]==s[i]){
            cou++;
        }else if(S[i]=='@'){
            if((s[i]=='a')||(s[i]=='t')||(s[i]=='c')||(s[i]=='o')||(s[i]=='d')||(s[i]=='e')||(s[i]=='r')){
                cou++;
            }
        }else if(s[i]=='@'){
            if((S[i]=='a')||(S[i]=='t')||(S[i]=='c')||(S[i]=='o')||(S[i]=='d')||(S[i]=='e')||(S[i]=='r')){
                cou++;
            }
        }
    }
    if(strlen(S)==cou){
        printf("You can win\n");
    }else{
        printf("You will lose\n");
    }
    
    return 0;
    } 