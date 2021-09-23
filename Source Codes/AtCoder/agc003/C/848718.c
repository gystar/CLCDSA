#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	long long val;
	int ord;
} ll;

int llintcmp(const void *a, const void *b) {
	long long c = (*(ll *)a).val - (*(ll *)b).val;
	if (c>0) return 1;
	else if (c==0) return 0;
	else return -1;
}

int main() {
	int flag=0, i, j, N;
	ll A[100010];
	long long T=0;
	scanf("%d", &N);
	for (i=0;i<N;i++) {
		scanf("%lld", &(A[i].val));
		A[i].ord = i;
	}

	qsort(A, N, sizeof(ll), llintcmp);

	for (i=0;i<(N+1)/2;i++) {
		if ((A[2*i]).ord %2) T++;
	}

	printf("%lld\n", T);

	return 0;
} 