#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>

int main(){
    int N;
    scanf("%d",&N);
    if(N==1) printf("Hello World");
    else{
        int A,B;
        scanf("%d",&A);
        scanf("%d",&B);
        printf("%d",A+B);
    }
    return 0;
} 