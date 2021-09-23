#include<stdio.h>
int main(void){
    long x,count;
    scanf("%ld",&x);

        count = (x-x%11)/11;
        count *= 2;
        if(x%11 != 0)count++;
        if(x%11 > 6)count++;

    printf("%ld",count);

    return 0;
} 