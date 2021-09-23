#include <stdio.h>

int main(){
	int m, n, N, ans;
	scanf("%d%d%d", &m, &n, &N);
	ans = N;
	while(N >= m){
		ans += (N / m) * n;
		N = N % m + (N / m) * n;
	}
	printf("%d\n", ans);
	return 0;
} 