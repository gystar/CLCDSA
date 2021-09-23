#include <stdio.h>
#include <math.h>
int main(void){
    // Your code here!
    long long int a,b,c,d,e;
    scanf("%ld%ld%ld",&a,&b,&c);
    d = a*b%1000000007;
    e = d*c%1000000007;
    printf("%lld\n",e);
} 