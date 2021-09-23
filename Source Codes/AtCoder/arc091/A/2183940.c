#include <stdio.h>
#include <stdlib.h>
#define int long long

signed main(){
	int N, M;
	scanf("%lld%lld", &N, &M);
	if(N == 1 && M == 1){
		printf("%lld\n", 1);
	}
	else if(N == 1 && M > 1){
		printf("%lld\n", M - 2);
	}
	else if(N > 1 && M == 1){
		printf("%lld\n", N - 2);
	}
	else{
		printf("%lld\n", (N - 2) * (M - 2));
	}
	return 0;
} 