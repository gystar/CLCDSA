#include <stdio.h>
int main(void){
    int x=0,n,max=0;
    char s[100];
    scanf("%d",&n);
    scanf("%s",s);
    for(int i=0;i<n;i++){
        if(s[i]=='I') x+=1;
        else x-=1;
        if(max<x) max=x;
    }
    printf("%d",max);
    return 0;
} 