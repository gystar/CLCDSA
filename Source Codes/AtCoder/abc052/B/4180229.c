#include<stdio.h>

int main(){
    int n,x=0,i,max=0;
    char s[101];
    char tmp;

    scanf("%d",&n);
    scanf("%s",s);

    for(i=0;i<n;i++){
        if(s[i]=='I'){
            x++;
            if(max<x){
                max = x;
            }
        }else{ x--;}
    }
    printf("%d",max);
    return 0;
} 