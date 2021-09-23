#include<stdio.h>
int main(){
    long int a,b,x;
    scanf("%ld %ld %ld",&a,&b,&x);
    long int y=b/x-a/x;
    if(a%x==0) y++;
    printf("%ld",y);
    return 0;
} 