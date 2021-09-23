#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C,D,E,x,y,cou=0,v[3];
    char S[3],s[3],X,Y;
    scanf("%d  %d",&A,&B);
    if(A<B){
        printf("0");
    }else{
        printf("%d",A-B);
    }
    
    return 0;
} 