#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C,D,E,x,y,cou=0,v[3];
    char S[3],s[3],X,Y;
    scanf("%d %d %d",&A,&B,&C);
    if((C>=A)&&(C<=B)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
} 