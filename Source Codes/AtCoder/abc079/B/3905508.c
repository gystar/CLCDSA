#include<stdio.h>
int main() {
	long long int a[1000005] = {};
	a[0] = 2;
  	a[1] = 1;
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		a[i] = a[i - 1] + a[i - 2];
		
	}
	printf("%lld", a[n]);
} 