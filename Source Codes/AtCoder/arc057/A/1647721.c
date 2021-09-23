#include <stdio.h>
#define int long long
#define M (int)(2 * 1e12)

signed main(){
	int A, K, ans;
	scanf("%lld%lld", &A, &K);
	if(K == 0){
		ans = M - A;
	}
	else{
		for(ans = 0; A < M; A += 1 + K * A, ans++){}
	}
	printf("%lld\n", ans);
	return 0;
} 