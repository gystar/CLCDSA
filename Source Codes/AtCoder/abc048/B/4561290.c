#include <stdio.h>

long long int f(long long int n,long long int x){
    if(n < 0) return 0;
    else return n / x + 1;
}

int main(void){
    long long int a,b,x;
    long long int ans = 0;
    scanf("%lld %lld %lld",&a,&b,&x);
    ans = f(b,x) - f(a - 1,x);
    printf("%lld\n",ans);
} 