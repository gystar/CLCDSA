#include<stdio.h>
#include<string.h>
int main(void){
int A,B,C,D,E,N,M,x,y,cou=0,cou2,v[1000000],w[1000000],min_i,en=0;
    char S[10],W[10],s[10],X,Y;
   scanf("%c %c",&X,&Y);
   if(X=='H'){
       if(Y=='H'){
           printf("H");
       }else{
           printf("D");
       }
   }else{
       if(Y=='H'){
           printf("D");
       }else{
           printf("H");
       }
   }
    return 0;
} 