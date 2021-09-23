#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C,D,E,x,y,cou=0,v[3];
    char S[3],s[3],X,Y;
    scanf("%d %d %d",&A,&B,&C);
    D=100*A+B*10+C;
    if(D%4==0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
} 