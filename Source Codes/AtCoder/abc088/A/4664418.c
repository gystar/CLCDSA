#include<stdio.h>
int a,n;
int main(void){
    scanf("%d%d",&n,&a);
    if(a >= 499){
        printf("Yes");
    }else if(a >= n%500){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
} 