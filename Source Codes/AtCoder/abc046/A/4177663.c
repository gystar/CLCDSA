#include <stdio.h>
int main(void){
    unsigned int a=0,b=0,c=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b){
        if(b==c)puts("1");
        if(b!=c)puts("2");
    }else if(a!=b){
        if(b==c)puts("2");
        if(b!=c && a!=c){
            puts("3");
        }else if(b!=c && a==c){
            puts("2");
        }
    }
    return 0;
} 