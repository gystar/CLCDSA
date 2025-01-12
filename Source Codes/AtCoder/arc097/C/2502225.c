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
typedef uint64_t ull;
typedef  int64_t sll;

#define N_MAX 200000
#define M_MAX 200000

#ifdef __cplusplus
#include <queue>
#include <stack>
// #include <tuple>
#include <set>
#include <map>

// using namespace std; // HELL
using std::queue;
using std::priority_queue;
using std::stack;
// using std::tuple;
using std::set;
using std::map;
using std::vector;
using std::greater;
using std::pair;

#endif

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



const hw vector8[8] = {
	{-1, -1},
	{-1,  0},
	{-1, +1},
	{ 0, -1},
	{ 0, +1},
	{+1, -1},
	{+1,  0},
	{+1, +1}
};

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

ull umin (ull x, ull y) {
	return (x < y) ? x : y;
}

ull umax (ull x, ull y) {
	return (x > y) ? x : y;
}

sll smin (sll x, sll y) {
	return (x < y) ? x : y;
}

sll smax (sll x, sll y) {
	return (x > y) ? x : y;
}

ull gcd (ull x, ull y) {
	if (x < y) {
		return gcd(y, x);
	} else if (y == 0) {
		return x;
	} else {
		return gcd(y, x % y);
	}
}

ull bitpow (ull a, ull x, ull modulo) {
	ull result = 1;
	while (x) {
		if (x & 1) {
			result *= a;
			result %= modulo;
		}
		x /= 2;
		a = (a * a) % modulo;
	}
	return result;
}

ull divide (ull a, ull b, ull modulo) {
	return (a * bitpow(b, modulo - 2, modulo)) % modulo;
}

ull udiff (ull a, ull b) {
	if (a >= b) {
		return a - b;
	} else {
		return b - a;
	}
}

sll sdiff (sll a, sll b) {
	if (a >= b) {
		return a - b;
	} else {
		return b - a;
	}
}

void printUquotient (ull left, ull right) {
	const int32_t digits = 20;

	printf("%llu.", left / right);
	left %= right;
	for (int32_t i = 0; i < digits; i++) {
		left *= 10;
		printf("%1d", left / right);
		left %= right;
	}
	puts("");

	return;
}

void printSquotient (sll left, sll right) {
	if (left * right < 0) putchar('-');
	printUquotient(sdiff(left, 0), sdiff(right, 0));

	return;
}

int bitcount (ull n) {
	int result = 0;
	while (n) {
		if (n & 1) result++;
		n /= 2;
	}
	return result;
}

#ifdef __cplusplus

bool setfind (set<ull> s, ull x) {
	return (s.find(x) != s.end());
}

#endif

// double distance (sll x1, sll y1, sll x2, sll y2) {
// 	double xdist2, ydist2, origindist, dist;

// 	xdist2 = (x1 - x2) * (x1 - x2);
// 	ydist2 = (y1 - y2) * (y1 - y2);
// 	return sqrt(xdist2 + ydist2);
// }

int32_t pullcomp (const void *left, const void *right) {
	ull l = *(ull*)left;
	ull r = *(ull*)right;
	if (l < r) {
		return -1;
	}
	if (l > r) {
		return +1;
	}
	return 0;
}

int32_t psllcomp (const void *left, const void *right) {
	sll l = *(sll*)left;
	sll r = *(sll*)right;
	if (l < r) {
		return -1;
	}
	if (l > r) {
		return +1;
	}
	return 0;
}

int32_t pcharcomp (const void *left, const void *right) {
	char l = *(char*)left;
	char r = *(char*)right;
	if (l < r) {
		return -1;
	}
	if (l > r) {
		return +1;
	}
	return 0;
}

int32_t pstrcomp (const void *left, const void *right) {
	char* l = *(char**)left;
	char* r = *(char**)right;

	return strcmp(l, r);
}

int32_t phwllABcomp (const void *left, const void *right) {
	hwll l = *(hwll*)left;
	hwll r = *(hwll*)right;
	if (l.a < r.a) {
		return -1;
	}
	if (l.a > r.a) {
		return +1;
	}
	if (l.b < r.b) {
		return -1;
	}
	if (l.b > r.b) {
		return +1;
	}
	return 0;
}

bool isinrange (sll left, sll x, sll right) {
	return (left <= x && x <= right);
}


ull mergeteq (ull a[], ull n) {
	ull l = n / 2, r = n - l;
	if (n == 1) return 0;
	ull ret = mergeteq(a, l) + mergeteq(a + l, r);

	ull tmp[n];
	sll i = 0, j = 0;
	while (i < l || j < r) {
		if (i == l) {
			tmp[i + j] = a[i + j];
			j++;
			continue;
		}
		if (j == r) {
			tmp[i + j] = a[i];
			i++;
			continue;
		}

		if (a[i] > a[l + j]) {
			tmp[i + j] = a[l + j];
			ret += l - i;
			j++;
		} else {
			tmp[i + j] = a[i];
			i++;
		}
	}

	for (i = 0; i < n; i++) {
		a[i] = tmp[i];
	}
	return ret;
}

ull parent[N_MAX];
ull rank[N_MAX];

ull uf_init (ull n) {
	sll i;
	for (i = 0; i < n; i++) {
		parent[i] = i;
		rank[i] = 0;
	}

	return n;
}
ull uf_find (ull x) {
	if (parent[x] == x) return x;
	return parent[x] = uf_find(parent[x]);
}
ull uf_unite (ull a, ull b) {
	a = uf_find(a);
	b = uf_find(b);
	if (a == b) return 0;

	if (rank[a] > rank[b]) {
		parent[b] = a;
	} else {
		parent[a] = b;
		if (rank[a] == rank[b]) {
			rank[b]++;
		}
	}

	return 1;
}

sll a[N_MAX];
sll b[N_MAX];

char s[N_MAX + 1];

char c[5000][3];

sll dp[5000][5000];
ull array[N_MAX];

ull conv[N_MAX];
ull revconv[N_MAX];

ull wt[5000][5000];
ull bt[5000][5000];

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

	for (i = 0; i < n * 2; i++) {
		a[i]--;
		if (c[i][0] == 'W') {
			b[i] = 0;
		} else {
			b[i] = 1;
		}

		revconv[a[i] + b[i] * n] = i;
	}

	for (i = 0; i <= n; i++) {
		wt[i][n * 2] = bt[i][n * 2] = 0;
		for (j = n * 2 - 1; j >= 0; j--) {
			bool iswadd = (b[j] == 0 && a[j] < i);
			bool isbadd = (b[j] == 1 && a[j] < i);
			wt[i][j] = wt[i][j + 1] + (iswadd ? 1 : 0);
			bt[i][j] = bt[i][j + 1] + (isbadd ? 1 : 0);

			// printf("[%lld][%lld]: %lld,%lld\n", i, j, wt[i][j], bt[i][j]);
		}
	}

	// ull wl = 0, bl = 0;
	// j = 0;
	// for (i = 0; i < n * 2; i++) {
	// 	if (b[i] == 0) {
	// 		while (wl <= a[i]) {
	// 			dp[j++] = wl;
	// 			wl++;
	// 		}
	// 	} else {
	// 		while (bl <= a[i]) {
	// 			dp[j++] = bl + n;
	// 			bl++;
	// 		}
	// 	}
	// }

	// for (i = 0; i < n * 2; i++) {
	// 	dp[i] = revconv[dp[i]];
	// }

	// for (i = 0; i < n * 2; i++) printf("%llu, \n", dp[i]);

	for (i = 0; i <= n; i++) {
		for (j = 0; j <= n; j++) {
			if (i == 0 && j == 0) {
				dp[i][j] = 0;
				continue;
			}

			ull addw = BIG;
			if (i) {
				ull ocurr = revconv[i - 1];
				ull curr = ocurr + wt[i - 1][ocurr + 1] + bt[j][ocurr + 1];
				addw = dp[i - 1][j] + (curr - (i + j - 1));
				// printf("\tW ocurr: %lld, addw: %lld\n", ocurr, addw);
				// printf("\t\t wt: %lld, bt: %lld\n", wt[i - 1][ocurr + 1], bt[j][ocurr + 1]);
			}

			ull addb = BIG;
			if (j) {
				ull ocurr = revconv[n + (j - 1)];
				ull curr = ocurr + wt[i][ocurr + 1] + bt[j - 1][ocurr + 1];
				addb = dp[i][j - 1] + (curr - (i + j - 1));
				// printf("\tB ocurr: %lld, addb: %lld\n", ocurr, addb);
				// printf("\t\t wt: %lld, bt: %lld\n", wt[i][ocurr + 1], bt[j - 1][ocurr + 1]);
			}

			dp[i][j] = umin(addw, addb);
			// printf("[%lld][%lld]: %lld\n", i, j, dp[i][j]);
		}
	}

	// result = mergeteq(dp, n * 2);
	result = dp[n][n];

	printf("%lld\n", result);
	// printf("%.12lf\n", dresult);
	// puts(s);

	return 0;

	success:
	// puts("YES");
	// puts("Yes");
	// printf("%llu\n", result);
	// puts("0");
	puts("Takahashi");
	return 0;

	fail:
	// puts("NO");
	// puts("No");
	// puts("0");
	puts("-1");
	// puts("-1 -1 -1");
	// puts("Aoki");
	return 1;
}

int32_t main (void) {
	int32_t i, j;
	int32_t x, y;

	// scanf("%lf%lf", &vda, &vdb, &vdc);
	// scanf("%lld%lld%lld%lld", &vsa, &vsb, &vsc, &vsd);
	// scanf("%llu%llu%llu", &vua, &vub, &vuc, &vud);
	// scanf("%llu%llu", &h, &w);
	// scanf("%*llu%*llu");
	scanf("%llu", &n, &m);
	// scanf("%llu", &k, &n);
	// scanf("%llu%llu", &vua, &vub, &vuc, &vud, &vue, &vuf);
	// scanf("%lld%lld", &vsa, &vsb, &vsc);
	// scanf("%s", s);
	// scanf("%s", t);
	// scanf("%llu", &m);
	// scanf("%llu", &q);
	for (i = 0; i < n * 2; i++) {
		scanf("%s", &c[i]);
		scanf("%lld", &a[i]);
		// scanf("%lld", &b[i]);
		// scanf("%llu", &c[i]);
		// a[i]--;
		// b[i]--;
	}
	// for (i = 0; i < m; i++) {
	// 	scanf("%lld", &a[n + i]);
	// 	scanf("%lld", &b[n + i]);
	// }
	// for (i = 0; i < n; i++) {
	// 	scanf("%llu", &b[i]);
	// }
	// for (i = 0; i < h; i++) {
	// 	for (j = 0; j < w; j++) {
	// 		scanf("%llu", &a[i][j]);
	// 	}
	// }
	// for (i = 0; i < h; i++) {
	// 	scanf("%s", &s[i]);
	// }

	// scanf("%llu", &k);
	// scanf("%llu", &q);
	solve();

	return 0;
} 