#include <stdio.h>

typedef long long int ll;

ll solve(ll n) {
    switch(n % 4) {
        case 0: return n;
        case 1: return 1;
        case 2: return n+1;
        case 3: return 0;
    }
}

int main() {
    ll a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", solve(a-1)^solve(b));
    return 0;
} 