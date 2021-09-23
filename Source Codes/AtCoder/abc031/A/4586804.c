#include <stdio.h>
int main(void){
    // Your code here!
    int a,d;
    scanf("%d%d",&a,&d);
    if((a+1)*d > (d+1)*a)
        printf("%d\n",(a+1)*d);
    else
        printf("%d\n",(d+1)*a);
} 