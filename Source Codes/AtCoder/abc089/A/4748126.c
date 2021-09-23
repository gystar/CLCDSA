#include<stdio.h>
int main(){
    int n,out;
    scanf("%d",&n);

    if(n==0 || n==1 || n==2){
        out=0;
    }else {
        out=n/3;
    }
    printf("%d",out);
    return 0;
    } 