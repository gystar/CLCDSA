#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//#define min(a, b) a < b ? a : b
//#define max(a, b) a > b ? a : b

//#define MAXN 100001

int main(void)
{
	long long i;
	long long N;
	//int ok;
	long long sumn = 0, suma = 0, k;

	scanf("%lld", &N);

	long long A[N];
	long long d[N];

	for (i = 0; i < N; i++) {
		scanf("%lld", &A[i]);
		suma += A[i];
	}

	sumn = N * (N + 1) / 2;
	if ((suma % sumn) != 0) {
		//ok = 0;
		printf("NO\n");
	} else {
		k = suma / sumn;
		for (i = 0; i < N; i++) {
			d[i] = A[(i + 1) % N] - A[i] - k;
		}
		for (i = 0; i < N; i++) {
			/*if (d[i] % N == 0 && d[i] <= 0) {
				ok = 1;
			} else {
				ok = 0;
				break;
			}*/
			//ok = 1;
			if (d[i] % N != 0 || d[i] > 0) {
				//ok = 0;
				//break;
				printf("NO\n");
				return (0);
			}
		}
		printf("YES\n");
	}
	/*if (ok) {
		
	} else {
		printf("NO\n");
	}*/
	return (0);
} 