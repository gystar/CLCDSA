#include <stdio.h>

int a[100005];
int b[100005];
int sum[100005];

int main() {

	int N, M;

	scanf("%d %d",&N,&M);

	int i;

	for (i = 0; i < M; i++) {
		scanf("%d %d",&a[i],&b[i]);
		sum[a[i]]++;
		sum[b[i]]++;
	}

	for (i = 1; i <= N; i++) {
		if (sum[i] % 2 == 1) { 
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");

	return 0;
} 