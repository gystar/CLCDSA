#include<stdio.h>
#include<string.h>
int main(void){
    int A,B;
    scanf("%d %d",&A,&B);
    if(A%500<=B){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
} 