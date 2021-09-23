#include <stdio.h>
#include <stdlib.h>

int main() {
	double n,k,a;
	scanf("%lf %lf", &n, &k);
	a = ((n - k) * (k - 1.0) * 6 + (n - k) * 3 + (k - 1.0) * 3 + 1) / (n * n * n);
	printf("%1.10lf\n", a);
	return 0;
} 