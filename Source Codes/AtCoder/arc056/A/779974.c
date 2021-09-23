#include <stdio.h>

#define min(x,y) (x>y)?y:x

int main() {
	long long A, B, K, L, P1, P2;
	scanf("%lld%lld%lld%lld", &A, &B, &K, &L);
	P1 = A*(K%L) + B*(K/L);
	P2 = B*(K/L+1);
	printf("%lld\n", min(P1,P2));
} 