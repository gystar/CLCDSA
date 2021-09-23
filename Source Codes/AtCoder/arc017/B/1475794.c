#include <stdio.h>

#define inf (int)(1e9)

int main(){
	int N, K, A, oldA = inf, i, length = 0, ans = 0;
	scanf("%d%d", &N, &K);
	for(i = 0; i < N; i++){
		scanf("%d", &A);
		if(A > oldA){
			length++;
			if(length >= K){
				ans++;
			}
		}
		else{
			length = 1;
		}
		oldA = A;
	}
	if(K == 1){
		printf("%d\n", N);
	}
	else{
		printf("%d\n", ans);
	}
	return 0;
} 