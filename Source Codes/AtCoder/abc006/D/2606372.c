/*
cat <<EOF >mistaken-paste
*/

#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

#define BIG 2000000007
#define VERYBIG 200000000000007LL

#define MOD 1000000007
#define FOD  998244353
typedef uint64_t ull;
typedef  int64_t sll;

#define N_MAX 300000
#define M_MAX 200000

ull n, m;

ull umin (ull x, ull y) {
	return (x < y) ? x : y;
}


sll a[N_MAX];
sll b[N_MAX];
sll c[N_MAX];
// char s[N_MAX];
char s[3010][3010];

ull dp[N_MAX + 1];

ull nibu (ull x, ull l) {
	ull ok = 0, ng = l + 1;
	while (ok + 1 < ng) {
		ull med = (ok + ng) / 2;
		if (dp[med] <= x) {
			ok = med;
		} else {
			ng = med;
		}
	}

	return ng;
}

ull solve () {
	sll i, j, ki, li;
	// ull result = 0;
	sll result = 0;
	double dresult = 0;
	// ull maybe = 0;
	sll maybe = 0;
	// ull sum = 0;
	sll sum = 0;
	sll item;
	ull *dpcell;

	ull lis = 0;
	dp[0] = 0;
	for (i = 0; i < n; i++) {
		ull leq = nibu(a[i], lis);
		
		if (leq > lis) {
			lis++;
			dp[leq] = a[i];
		}
		dp[leq] = umin(dp[leq], a[i]);
		// printf("[%llu] %llu\n", leq, dp[leq]);
	}

	result = n - lis;

	printf("%lld\n", result);
	return 0;
}

int32_t main (void) {
	int32_t i, j;
	int32_t x, y;

	scanf("%llu", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}
	solve();

	return 0;
} 