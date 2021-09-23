#include<stdio.h>

int main() {
	long long int n,x, a[200005] = {}, result = 0,memo;
	scanf("%lld", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &a[i]);

	}
	if (a[0] != 0) { printf("-1"); return 0; }
	for (int i = 1; i < n; i++) {
		if(a[i]>a[i-1]+1){ printf("-1"); return 0; }
		if (a[i] == a[i - 1] + 1) { result++; }
		else { result += a[i]; }
	}
	printf("%lld", result);
} 