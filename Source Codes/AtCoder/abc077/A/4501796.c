#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C,D,E,x,y,cou=0,v[3];
    char S[3],s[3],X,Y;
    scanf("%s%s",&S,&s);
   if((S[0]==s[2])&&(S[1]==s[1])&&(S[2]==s[0])){
            printf("YES");
    }else{
        printf("NO");
    }
    return 0;
} 