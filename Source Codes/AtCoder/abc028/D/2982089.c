#include <stdio.h>

int main(void){
	long long int n, k;
	scanf("%lld%lld", &n, &k);
	printf("%.15lf\n", (double)(6 * (k - 1) * (n - k) + 3 * (n - 1) + 1)/n/n/n);
} 