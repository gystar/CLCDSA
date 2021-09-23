#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if((A>=B)&&(A>=C)){
        printf("%d",10*A+B+C);

    }else if((B>=A)&&(B>=C)){
        printf("%d",10*B+A+C);

    }else if((C>=B)&&(C>=A)){
        printf("%d",10*C+A+B);

    }
    return 0;
} 