#include <stdio.h>

#define int long long
#define p (int)(1e9 + 7)

int MOD(int a){
	if(a >= 0){
		return a % p;
	}
	else{
		return p + a % p;
	}
}

signed main(){
	int L, k, s, t, K, S, T, i;
	scanf("%lld", &L);
	for(i = 1, k = 1, s = 2, t = 1; i <= L; i++){
		K = MOD(3 * k + MOD(s * MOD(s * s)));
		S = MOD(s * MOD(s + s * s - t * t));
		T = MOD(t * MOD(s * s - t * t));
		k = K;
		s = S;
		t = T;
	}
	printf("%lld\n", K);
	return 0;
} 