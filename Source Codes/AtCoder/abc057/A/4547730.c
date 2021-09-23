#include<stdio.h>
#include<string.h>
int main(void){
int A,B,C,D,E,N,M,x,y,cou=0,cou2,v[1000000],w[1000000],min_i,en=0;
    char S[10],W[10],s[10],X,Y;
   scanf("%d %d",&A,&B);
   if(A+B<24){
       printf("%d",A+B);
   }else{
       printf("%d",(A+B)-24);
   }
    return 0;
} 