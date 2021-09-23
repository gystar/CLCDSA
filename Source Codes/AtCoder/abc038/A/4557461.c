#include<stdio.h>
#include<string.h>
int main(void){
int A,B,C,D,E,N,M,x,y,cou=0,cou2,v[1000000],w[1000000],min_i,en=0;
    char S[100],W[100],s[10],X,Y;
   scanf("%s",&S);
   A=strlen(S);
   if(S[A-1]=='T'){
       printf("YES");
   }else{
       printf("NO");
   }
   return 0;
} 