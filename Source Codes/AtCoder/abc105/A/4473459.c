#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>

int main(){
    int N,K;
    scanf("%d %d",&N,&K);
    if(N%K==0) printf("0");
    else printf("1");
    return 0;
} 