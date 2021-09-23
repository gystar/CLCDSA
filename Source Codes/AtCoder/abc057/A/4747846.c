#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int start = a+b;
    if(start>=24)start -= 24;
    printf("%d\n",start);
} 