#include <stdio.h>
#include <stdlib.h>
#define int long long

signed main(){
	int N, i, ans = 0;
	scanf("%lld", &N);
	int *A = (int *)malloc(sizeof(int) * N);
	for(i = 0; i < N; i++){
		scanf("%lld", &A[i]);
	}
	for(i = 0; i < N; i++){
		ans += A[i] / 2;
		if(i == N - 1){
			break;
		}
		if(A[i] % 2 == 1 && A[i + 1] > 0){
			ans++;
			A[i + 1]--;
		}
	}
	printf("%lld\n", ans);
	return 0;
} 