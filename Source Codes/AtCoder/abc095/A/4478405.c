#include<stdio.h>
#include<string.h>
int main(void){
    char S[3];
    int i,cou;
    scanf("%s",&S);
    for(i=0;i<3;i++){
        if(S[i]=='o'){
            cou++;
        }
    }
    printf("%d",700+cou*100);
    return 0;
} 