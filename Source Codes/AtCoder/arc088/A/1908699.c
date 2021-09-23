#include<stdio.h>
int main()
{
    long long int x,y;
    int result;
    scanf("%lld %lld", &x, &y);
    for(result=0; ; result++) {
        if(x > y)
            break;
        else
            x = x * 2;
    }
    printf("%d\n", result);
    return 0;
} 