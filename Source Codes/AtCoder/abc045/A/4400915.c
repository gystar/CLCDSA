#include <stdio.h>

int main(){
    int a,b,h,sum=0;
    scanf("%d%d%d",&a,&b,&h);
    sum+=(a+b)*h/2;
    printf("%d\n",sum);
} 