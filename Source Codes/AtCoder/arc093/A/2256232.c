#include <stdio.h>
#include <stdlib.h>
#define int long long

int ABS(int a){
	return a >= 0 ? a : -a;
}

signed main(){
	int N, i;
	scanf("%lld", &N);
	int *A = (int *)malloc(sizeof(int) * (N + 2));
	int *S = (int *)malloc(sizeof(int) * (N + 2));
	int *T = (int *)malloc(sizeof(int) * (N + 2));
	A[0] = 0;
	A[N + 1] = 0;
	for(i = 1; i <= N; i++){
		scanf("%lld", &A[i]);
	}
	S[0] = 0;
	for(i = 1; i <= N; i++){
		S[i] = S[i - 1] + ABS(A[i] - A[i - 1]);
	}
	T[N + 1] = 0;
	for(i = N; i > 0; i--){
		T[i] = T[i + 1] + ABS(A[i] - A[i + 1]);
	}
/*	for(i = 1; i <= N; i++){
		printf("S[%lld] = %lld\n", i, S[i]);
	}
	for(i = 1; i <= N; i++){
		printf("T[%lld] = %lld\n", i, T[i]);
	}
*/	for(i = 1; i <= N; i++){
		printf("%lld\n", S[i - 1] + ABS(A[i - 1] - A[i + 1]) + T[i + 1]);
	}
	return 0;
} 