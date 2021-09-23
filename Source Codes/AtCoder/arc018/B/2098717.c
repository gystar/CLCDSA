/*
cat <<EOF >mistaken-paste
*/

#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define BIG 2000000007
#define VERYBIG 200000000000007LL

#define MOD 1000000007
typedef uint64_t ull;
typedef  int64_t sll;

#define N_MAX 100000
#define M_MAX 200000

typedef struct {
	int32_t a;
	int32_t b;
} hw;

typedef struct {
	sll a;
	sll b;
} hwll;

typedef struct {
	hwll a;
	hwll b;
} linell;


typedef struct {
	ull s;
	ull t;
	int32_t c;
} struct_a;

typedef struct {
	int32_t from;
	int32_t to;
	sll cost;
} struct_b;

ull n, m;
ull h, w;
ull k;
ull q;
ull vua, vub, vuc, vud, vue, vuf;
sll vsa, vsb, vsc, vsd, vse, vsf;
long double vra, vrb, vrc;
double vda, vdb, vdc;
size_t slen;
size_t tlen;
char ch, dh;

sll a[N_MAX];
sll b[N_MAX];

bool istriangle (sll x, sll y, sll z) {
	// (b[y] - b[x]) / (a[y] - a[x])
	if ((b[y] - b[x]) * (a[z] - a[x]) == (b[z] - b[x]) * (a[y] - a[x])) return false;
	return (((a[x] + a[y]) * (b[x] + b[y]) + (a[y] + a[z]) * (b[y] + b[z]) + (a[z] + a[x]) * (b[z] + b[x])) % 2 == 0);
}

ull solve () {
	sll i, j, ki;
	sll result = 0;

	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			for (ki = j + 1; ki < n; ki++) {
				if (istriangle(i, j, ki)) result++;
			}
		}
	}

	printf("%llu\n", result);
	return 0;
}

int32_t main (void) {
	int32_t i, j;
	int32_t x, y;

	scanf("%llu", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%llu", &a[i]);
		scanf("%llu", &b[i]);
	}

	solve();

	return 0;
} 