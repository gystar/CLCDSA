#include<stdio.h>
int a,b;
int main(void){
    scanf("%d%d",&a,&b);
    if(a<=8&&b<=8){
        printf("Yay!");
    }else{
        printf(":(");
    }
    return 0;
} 