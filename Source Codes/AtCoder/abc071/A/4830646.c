#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    int disa = abs(a-x),disb = abs(b-x);
    if(disa<disb)printf("A\n");
    else printf("B\n");
} 