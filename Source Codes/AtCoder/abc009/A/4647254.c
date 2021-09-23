#include<stdio.h>
int main(void){
    int n,cnt = 0;
    scanf("%d",&n);
    cnt = n%2 == 0 ? n/2 : n/2+1;
    printf("%d\n",cnt);
} 