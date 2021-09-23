#include<stdio.h>

int main(void){
    int a,b,c;
    scanf("%d %d %d\n",&a,&b,&c);
    if(a*b%2==0){
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }
} 