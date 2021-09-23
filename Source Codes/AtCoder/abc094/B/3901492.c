#include<stdio.h>
long long int small(long long int a, long long int b) {
	if (a >= b) {
		return b;
	}
	else {
		return a;
	}
}
int main() {
	long long int n, s[5000] = {},m,min=10000000,count=0,x;
	scanf("%lld%lld%lld", &n, &m,&x);
	for (int i = 1; i <= m; i++) {
		scanf("%lld", &s[i]);
		
		if (s[i] < x) {
			count++;
		}
	}
	printf("%lld", small(count,m-count));
} 