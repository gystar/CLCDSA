#include<stdio.h>
#include<string.h>
int main(void){
int A,B,C,D,E,N,M,x,y,cou=0,cou2,v[1000000],w[1000000],min_i,en=0;
    char S[100],W[100],s[10],X,Y;
   scanf("%d %d",&A,&B);
   if(B%A==0){
    printf("%d",B/A);    
   }else{
   printf("%d",B/A+1);
   }
   return 0;
} 