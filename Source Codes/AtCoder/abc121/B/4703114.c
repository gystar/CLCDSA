#include<stdio.h>

int main(){
	int N,M,C;
	scanf("%d %d %d", &N, &M, &C);
int B[M];
	for(int i = 0; i < M; i++){
		scanf("%d",&B[i]);
	}
	int A[N][M];
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			scanf("%d",&A[i][j]);
		}
	}
	int count = 0;
	int ans[N];
	for(int i = 0; i < N; i++){
		ans[i] = 0;
	}
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			ans[i] += A[i][j] * B[j];
		}
		ans[i] += C;
		if(ans[i] > 0){
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
} 