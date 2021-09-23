#include <stdio.h>
#include <stdlib.h>

int compar_int(int *a, int *b) {
	if (*a > *b) return 1;
	if (*a == *b) return 0;
	return -1;
}

int main() {
	long long int ans;
	int l[2];
	l[0] = 0; l[1] = 0;
	int N;
	scanf("%d", &N);
	int A[N];
	for (int i = 0; i < N; i++) scanf("%d", A+i);
	
	qsort(A, N, sizeof(int), compar_int);

	for (int i = N-1; i > 0 && !l[1]; i--) {
		if (A[i] == A[i-1]) {
			if (!l[0]) l[0] = A[i];
			else l[1] = A[i];
			i--;
		}
	}

	ans = (long long int)l[0] * l[1];

	printf("%lld\n", ans);

	return 0;	
} 