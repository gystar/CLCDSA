#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C,X;
    char S[10];
    scanf("%d %d",&A,&B);
    if((A+B)%2!=0){
   printf("%d",(A+B)/2+1);
    }else{
        printf("%d",(A+B)/2);
    }
    return 0;
} 