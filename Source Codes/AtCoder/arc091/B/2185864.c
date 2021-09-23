#include <stdio.h>
#include <stdlib.h>
#define int long long

int max(int a, int b){
	return a >= b ? a : b;
}

signed main(){
	int N, K, b, ans = 0;
	scanf("%lld%lld", &N, &K);
	if(K == 0){
		printf("%lld\n", N * N);
		return 0;
	}
	for(b = 1; b <= N; b++){
		if(b > K){
			ans += (N / b) * (b - K) + max((N % b) - K + 1, 0);
		}
	}
	printf("%lld\n", ans);
	return 0;
} 