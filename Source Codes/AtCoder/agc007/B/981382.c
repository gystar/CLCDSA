#include <stdio.h>

int p[20005];
int a[20005];
int b[20005];

int main() {

	int N;

	scanf("%d",&N);

	int i;

	for (i = 0; i < N; i++) {
		scanf(" %d",&p[i]);
		a[i] = N*(i + 1);
		b[N - 1 - i] = a[i];
	}
	for (i = 0; i < N; i++) {
		a[p[i] - 1] += i;
	}
	for (i = 0; i < N-1; i++) {
		printf("%d ",a[i]);
	}
	printf("%d\n",a[N-1]);
	for (i = 0; i < N - 1; i++) {
		printf("%d ", b[i]);
	}
	printf("%d\n", b[N - 1]);

	return 0;
} 