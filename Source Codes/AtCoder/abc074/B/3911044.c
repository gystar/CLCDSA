#include<stdio.h>
//????(?)
long long int small(long long int a, long long int b) {
	if (a >= b) {
		return b;
	}
	else {
		return a;
	}
}
int main() {
	long long int n, m, num[500] = {}, result;
	scanf("%lld%lld",&n,&m);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &num[i]);
		result += small(num[i], m - num[i]) * 2;
	}
	
	printf("%lld", result);
			
} 