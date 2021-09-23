#include<stdio.h>
int main(void){
    int X,A,B;
    scanf("%d",&X);
    scanf("%d",&A);
    scanf("%d",&B);
    int money = X - A; //???????
    money = money - B * (money / B);
    printf("%d\n",money);
    return 0;
} 