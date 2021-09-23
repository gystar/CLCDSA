#include<stdio.h>
    #include<string.h>
    int main(void){
    int A,B;
    char S[30];
    scanf("%s",S);
    A=strlen(S);
    for(int i=0;i<A;i++){
        if((S[i]!='a')&&(S[i]!='i')&&(S[i]!='u')&&(S[i]!='e')&&(S[i]!='o')){
            printf("%c",S[i]);
        }
    }
    printf("\n");
    
    return 0;
    } 