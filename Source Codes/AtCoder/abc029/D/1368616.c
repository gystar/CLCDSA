#include <stdio.h>

int main(){
	int N, k, n, ans = 0;
	scanf("%d", &N);
	for(k = 1; k <= N; k *= 10){
		n = (N % (10 * k)) / k;
		if(n == 0){
			ans += (N / (10 * k)) * k;
		}
		else if(n == 1){
			ans += (N / (10 * k)) * k + N % k + 1;
		}
		else{
			ans += (N / (10 * k) + 1) * k;
		}
	}
	printf("%d\n", ans);
	return 0;
} 