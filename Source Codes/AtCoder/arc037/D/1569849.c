#include <stdio.h>

#define ll long long
#define p (ll)(1e9 + 7)

int main(){
	ll L, k, s, t, K, S, T;
	scanf("%lld", &L);
	for(k = 1, s = 2, t = 1; L > 0; L--, k = K, s = S, t = T){
		K = (3 * k + ((s * s) % p) * s) % p;
		S = (s * ((s + ((s + t) % p) * ((s - t + p) % p)) % p)) % p;
		T = (t * ((((s + t) % p) * ((s - t + p) % p)) % p)) % p;
	}
	printf("%lld\n", K);
	return 0;
} 