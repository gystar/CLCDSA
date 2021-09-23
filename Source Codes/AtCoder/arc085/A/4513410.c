#include<stdio.h>
#include<math.h>
int main() {
	int N, M;
	int ans;
	scanf("%d%d",&N, &M);
	ans = (1900 * M + 100*(N - M))*(int)pow(2,(double)M);
	printf("%d\n", ans);
	return 0;
} 