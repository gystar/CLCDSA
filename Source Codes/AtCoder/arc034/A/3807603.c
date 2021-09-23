#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int a[N], b[N], c[N], d[N];
	double e[N];
	int i, j, k;
	for (i = 0; i < N; i++) {
		scanf("%d%d%d%d%lf", &a[i], &b[i], &c[i], &d[i], &e[i]);
	}//input
	double max;
	max =(double)(a[0] + b[0] + c[0] + d[0] + e[0]*11.0/90.0);
	i = 1;
	do {
		if (max < ((double)(a[i]+b[i]+c[i]+d[i]+e[i]*11.0/90.0))) {
			max = (double)(a[i]+b[i]+c[i]+d[i]+e[i]*11.0/90.0);
		}
		i++;
	} while (i < N);
	printf("%10.8f\n", max);
	return 0;
} 