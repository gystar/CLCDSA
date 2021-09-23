#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C,D,E,x,y,cou=0,v[3];
    char S[3],s[3],X,Y;
    scanf("%d %d %d",&A,&B,&C);
    if((A>B)&&(A>C)){
        printf("%d",B+C);
    }else if((B>C)&&(B>A)){
        printf("%d",A+C);
    }else{
        printf("%d",A+B);
    }
    return 0;
} 