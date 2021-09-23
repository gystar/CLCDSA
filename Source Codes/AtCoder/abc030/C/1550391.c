#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, M, X, Y, i, j, ans = 0;
	scanf("%d%d%d%d", &N, &M, &X, &Y);
	int *a = (int *)malloc(sizeof(int) * (N + 1));
	int *b = (int *)malloc(sizeof(int) * (M + 1));
	for(i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}
	for(j = 0; j < M; j++){
		scanf("%d", &b[j]);
	}
	for(i = 0, j = 0; i < N && j < M; ){
		while(a[i] + X > b[j] && j < M){
			j++;
		}
		if(j == M){
			break;
		}
		ans++;
		while(b[j] + Y > a[i] && i < N){
			i++;
		}
		if(i == N){
			break;
		}
	}
	printf("%d\n", ans);
	return 0;
} 