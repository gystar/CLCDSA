#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C,cou;
    char S[100000];
    scanf("%d",&A);
    if((A>=1)&&(A<=999)){
        printf("ABC");
    }else{
        printf("ABD");
    }
    return 0;
} 