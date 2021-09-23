#include <stdio.h>
long long gcd(long long a, long long b){return (a<b?a:b)==0?(a>b?a:b):gcd((a<b?a:b),(a>b?a:b)%(a<b?a:b));}
int main(void){
    long long n,x;
    scanf("%lld%lld",&n,&x);
    printf("%lld\n",3*(n-gcd(n,x)));
    return 0;
} 