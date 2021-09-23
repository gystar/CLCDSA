#include<stdio.h>
#include<string.h>
int main(void){
int A,B,C,D,E,N,M,x,y,i,j,cou=0,cou2,cou3,v[1000000],w[1000000],min_i,en=0;
    char S[100],W[100],s[100],X,Y;
    scanf("%d %d %d",&A,&B,&C);
    while(1){
        if((C%A==0)&&(C%B==0)){
            break;
        }
        C++;
    }
    printf("%d\n",C);
    return 0;
} 