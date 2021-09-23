#include <stdio.h>

unsigned long long solve(unsigned long long a){
    if(a%2 != 0) { 
        return ((a+1)/2)%2;
    }
    else { return (a+1)^solve(a+1); }
}

int main(void)
{
    unsigned long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", solve(a-1)^solve(b));
    return 0;
} 