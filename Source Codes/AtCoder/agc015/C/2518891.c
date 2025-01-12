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


sll a[N_MAX];
sll b[N_MAX];

// char s[N_MAX + 1];
char s[2222][2222];


ull sn[2222][2222];
sll vac[2222][2222];
sll tate[2222][2222];
sll yoko[2222][2222];

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

	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			sn[i][j] = (s[i][j] - '0');
		}
	}

	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			vac[i][j] = (j ? vac[i][j - 1] : 0) + sn[i][j];
		}
	}
	for (j = 0; j < w; j++) {
		for (i = 0; i < h; i++) {
			vac[i][j] = (i ? vac[i - 1][j] : 0) + vac[i][j];
		}
	}

	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			if (j == 0) {
				yoko[i][j] = 0;
			} else {
				yoko[i][j] = yoko[i][j - 1] + (sn[i][j] * sn[i][j - 1]);
			}
		}
	}
	for (j = 0; j < w; j++) {
		for (i = 0; i < h; i++) {
			yoko[i][j] = (i ? yoko[i - 1][j] : 0) + yoko[i][j];
		}
	}

	for (j = 0; j < w; j++) {
		for (i = 0; i < h; i++) {
			if (i == 0) {
				tate[i][j] = 0;
			} else {
				tate[i][j] = tate[i - 1][j] + (sn[i][j] * sn[i - 1][j]);
			}
		}
	}
	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			tate[i][j] = (j ? tate[i][j - 1] : 0) + tate[i][j];
			// printf("tate[%lld][%lld]: %llu\n", i, j, tate[i][j]);
			
		}
	}


	while (q--) {
		ull x1, y1, x2, y2;
		scanf("%llu%llu%llu%llu", &x1, &y1, &x2, &y2);
		x1--;
		y1--;
		x2--;
		y2--;

		ull vcount =
			vac[x2][y2]
			- (y1 ? vac[x2][y1 - 1] : 0)
			- (x1 ? vac[x1 - 1][y2] : 0)
			+ ((x1 && y1) ? vac[x1 - 1][y1 - 1] : 0);

		ull tates =
			tate[x2][y2]
			- (y1 ? tate[x2][y1 - 1] : 0)
			- tate[x1][y2]
			+ (y1 ? tate[x1][y1 - 1] : 0);

		ull yokos =
			yoko[x2][y2]
			- yoko[x2][y1]
			- (x1 ? yoko[x1 - 1][y2] : 0)
			+ (x1 ? yoko[x1 - 1][y1] : 0);

		// printf("(%llu - %llu - %llu)\n", vcount, tates, yokos);

		result = vcount - (tates + yokos);
		printf("%llu\n", result);
	}

	// printf("%lld\n", result);
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
	scanf("%llu%llu", &h, &w);
	// scanf("%*llu%*llu");
	// scanf("%llu%llu", &n, &m);
	// scanf("%llu", &k, &n);
	// scanf("%llu%llu", &vua, &vub, &vuc, &vud, &vue, &vuf);
	// vua--;
	// vub--;
	// scanf("%lld%lld", &vsa, &vsb, &vsc);
	// scanf("%s", s);
	// scanf("%s", t);
	// scanf("%llu", &k);
	scanf("%llu", &q);
	// for (i = 0; i < n; i++) {
	// 	scanf("%lld", &a[i]);
	// 	scanf("%lld", &b[i]);
	// 	// scanf("%llu", &c[i]);
	// 	// a[i]--;
	// 	// b[i]--;
	// 	// c[i]--;
	// }
	// scanf("%llu", &q);

	// for (i = 0; i < h; i++) {
	// 	for (j = 0; j < w; j++) {
	// 		scanf("%llu", &a[i][j]);
	// 	}
	// }
	for (i = 0; i < h; i++) {
		scanf("%s", &s[i]);
	}

	// scanf("%llu", &k);
	// scanf("%llu", &q);
	solve();

	return 0;
} 