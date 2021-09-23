#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C,D,E,x,y,cou=0,v[3];
    char S[10],W[10],s[10],X,Y;
    scanf("%d %d %d",&A,&B,&C);
    if(B-A==C-B){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
} 