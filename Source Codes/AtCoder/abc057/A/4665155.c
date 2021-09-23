#include<stdio.h>
int a,b;
int main(void){
    scanf("%d%d",&a,&b);
    if(a+b >= 24){
        printf("%d",a+b-24);
    }else{
        printf("%d",a+b);
    }
} 