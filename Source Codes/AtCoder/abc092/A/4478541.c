#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C,D;
    char S[3];
    scanf("%d %d %d %d",&A,&B,&C,&D);
    if(A>B){
        if(C>D){
            printf("%d",B+D);
        }else{
            printf("%d",B+C);
        }
    }else{
        if(C>D){
            printf("%d",A+D);
        }else{
            printf("%d",A+C);
        }
    }
    return 0;
} 