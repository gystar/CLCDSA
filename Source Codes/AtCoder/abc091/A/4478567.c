#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C,D;
    char S[3];
    scanf("%d %d %d",&A,&B,&C);
    if(A+B<C){
        printf("No");
    }else{
        printf("Yes");
    }
    return 0;
} 