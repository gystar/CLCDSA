#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C,D,E,x,y,cou=0,v[3];
    char S[3],s[3],X,Y;
    scanf("%d %d %d",&A,&B,&C);
    if(A>B){
        D=A-B;
    }else{
        D=B-A;
    }
    if(A>C){
        E=A-C;
    }else{
        E=C-A;
    }
    if(D>E){
        printf("B");
    }else{
        printf("A");
    }
    return 0;
} 