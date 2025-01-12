#include <stdio.h>
#include <stdlib.h>
#define int long long
#define inf (int)(1e18)

int min(int a, int b){
	return a <= b ? a : b;
}

signed main(){
	int N, i, S = 0, minBi = inf, ans;
	scanf("%lld", &N);
	int *A = (int *)malloc(sizeof(int) * N);
	int *B = (int *)malloc(sizeof(int) * N);
	for(i = 0; i < N; i++){
		scanf("%lld%lld", &A[i], &B[i]);
		if(A[i] > B[i]){
			minBi = min(minBi, B[i]);
		}
		S += A[i];
	}
	if(minBi == inf){
		ans = 0;
	}
	else{
		ans = S - minBi;
	}
	printf("%lld\n", ans);
	return 0;
} 