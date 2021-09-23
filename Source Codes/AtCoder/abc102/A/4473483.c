#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>

int main(){
    int N;
    scanf("%d",&N);
    if(N%2==0) printf("%d",N);
    else printf("%d",2*N);
    return 0;
} 