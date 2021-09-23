#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>

int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    if(A%2==0 || B%2==0) printf("No");
    else printf("Yes");
    return 0;
} 