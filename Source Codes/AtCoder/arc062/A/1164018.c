#include <stdio.h>
#define ll long long
#define MAX(a,b) ((a)>(b)?(a):(b))
int main(void){
    int n;
    ll a=1,b=1;
    ll c,d;
    scanf("%d",&n);
    while(n-->0){
        scanf("%lld %lld",&c,&d);
        ll k=MAX((a+c-1)/c,(b+d-1)/d);
        a = c*k, b = d*k;
    }
    printf("%lld\n",a+b);
} 