#include<stdio.h>
int d,n;
int main(void){
    scanf("%d%d",&d,&n);
    if(d == 0){
        if(n == 100){
            printf("101");
        }else{
        printf("%d",n);
        
    }}else if(d == 1){
         if(n == 100){
            printf("10100");
        }else{
        printf("%d",n*100);
    }}else if(d == 2){
         if(n == 100){
            printf("1010000");
        }else{
        printf("%d",n*10000);
        }
    }

    return 0;
} 