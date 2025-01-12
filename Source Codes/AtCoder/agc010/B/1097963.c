#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define min(a, b) a < b ? a : b
#define max(a, b) a > b ? a : b

#define MAXN 100000

int main(void)
{
	long long i;
	long long N;
	int ok = 1;
	long long sumn = 0, suma = 0, k;
	long long A[MAXN];
	long long d[MAXN];

	scanf("%lld", &N);

	for (i = 0; i < N; i++) {
		scanf("%lld", &A[i]);
		suma += A[i];
	}

	sumn = N * (N + 1) / 2;
	if ((suma % sumn) != 0) {
		printf("NO\n");
	} else {
		k = suma / sumn;
		for (i = 0; i < N; i++) {
			d[i] = A[(i + 1) % N] - A[i] - k;
		}
		for (i = 0; i < N; i++) {
			if (d[i] % N == 0 && d[i] <= 0) {
				//ok = 1;
			} else {
				ok = 0;
				break;
			}
			/*if (d[i] % N != 0 || d[i] > 0) {
				ok = 0;
				break;
			}*/
		}
		//printf("YES\n");
		if (ok) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	/*if (ok) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}*/
	return (0);
} 