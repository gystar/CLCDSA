#include<stdio.h>
long long N, ans;
int num(long long a, long long b3, long long b5, long long b7) {
	if (a > N) { return; }
	if (b3 + b5 + b7 == 3) { ans++; }
	num(a * 10 + 3, 1, b5, b7);
	num(a * 10 + 5, b3, 1, b7);
	num(a * 10 + 7, b3, b5, 1);
}

int main() {
	scanf("%lld", &N);
	num(0, 0, 0, 0);
	printf("%lld\n", ans);
	return 0;
} 