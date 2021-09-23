#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,X;
    scanf("%d %d %d",&A,&B,&X);
    printf("%d",(A-B)%X);
    
    return 0;
} 