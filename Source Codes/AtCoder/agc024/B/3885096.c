#include<stdio.h>
#include<string.h>
#include<stdlib.h>

long long int big(long long int a, long long int b) {
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	long long int k, s[200050] = {}, a[200050] = {}, left, right, memo = 0;
	scanf("%lld", &k);
	for (int i = 1; i <= k; i++) {
		scanf("%lld", &s[i]);
		a[s[i]] = a[s[i] - 1] + 1;
	}
	for (int i = 1; i <= k; i++) {
		if (memo < a[i]) { memo = a[i]; }
	}
	printf("%lld", k - memo);
} 