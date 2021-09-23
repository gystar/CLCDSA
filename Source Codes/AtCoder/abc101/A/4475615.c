#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C,cou;
    char S[4];
    scanf("%s",&S);
    for(int i=0;i<4;i++){
        if(S[i]=='+'){
            cou++;
        }else{
            cou--;
        }
    }
    
    printf("%d",cou);
    return 0;
} 