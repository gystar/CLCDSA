/*
cat <<EOF >mistaken-paste
*/

#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define BIG 2000000007

#define MOD 1000000007
typedef unsigned long long ull;
typedef   signed long long sll;

#define N_MAX 200000
#define M_MAX 200

typedef struct {
	int a;
	int b;
} hw;

typedef struct {
	sll a;
	sll b;
} hwll;


typedef struct {
	ull s;
	ull t;
	int c;
} struct_a;



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
ull vua, vub, vuc, vud, vue, vuf;
sll vsa, vsb, vsc, vsd, vse, vsf;
long double vra, vrb, vrc;
size_t slen;
size_t tlen;
// ull a[N_MAX];
sll a[N_MAX];
// ull a[N_MAX][N_MAX];
// ull wall[N_MAX][M_MAX];
// ull b[N_MAX];
// sll b[N_MAX];
// ull b[N_MAX][N_MAX];
// sll b[N_MAX][N_MAX];
// char s[N_MAX + 1];
// char t[N_MAX + 1];
// char s[N_MAX][M_MAX + 1];

ull dp[N_MAX];
// sll dp[N_MAX];
// bool dp[N_MAX];
// ull dq[N_MAX];
// ull dp[N_MAX + 1][N_MAX + 1];
// ull dp[N_MAX][M_MAX + 1];

// hw arr[N_MAX];
hwll arr[N_MAX * 2];
// hw brr[M_MAX];

// ull bitdp[1 << N_MAX];

// ull digitdp[102][   2][    2];
//          pos  less  carry


// struct_a arr[N_MAX * 2];
// struct_b brr[N_MAX * 2];

void swap_adj (ull *a, ull *b) {
	ull tmp = *b;
	*b = *a;
	*a = tmp;
	return;
}

ull divide (ull a, ull b) {
	ull x = MOD - 2;
	ull ans = 1;
	while (x) {
		if (x & 1) ans = (ans * b) % MOD;
		b = (b * b) % MOD;
		x /= 2;
	}
	return (a * ans) % MOD;
}

int digits (ull x) {
	int i = 1;
	while (x >= 10) {
		x /= 10;
		i++;
	}
	return i;
}

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

// int nextroute (int arr[]) {
// 	int i = n - 1;
// 	int j, x;
// 	while (arr[i - 1] > arr[i]) i--;

// 	x = n;
// 	for (j = i; j < n; j++) {
// 		if (arr[j] < arr[i - 1]) continue;
// 		if (x == n || arr[x] > arr[j]) x = j;
// 	}
// 	arr[i - 1] ^= arr[x];
// 	arr[x] ^= arr[i - 1];
// 	arr[i - 1] ^= arr[x];

// 	qsort(&arr[i], n - i, sizeof(int), comp);
// 	return 0;
// }

int targetdig (ull x, int index /* 1-indexed */) {
	// static...?
	int posmax = digits(x);
	if (posmax < index) return -1;
	while (posmax > index) {
		posmax--;
		x /= 10;
	}
	return x % 10;
}

int charcomp (const char left, const char right) {
	if (left < right) {
		return -1;
	} else if (left > right) {
		return +1;
	} else {
		return 0;
	}
}

int pcharcomp (const char *left, const char *right) {
	return charcomp(*left, *right);
}

int intcomp (const int left, const int right) {
	if (left < right) {
		return -1;
	} else if (left > right) {
		return +1;
	} else {
		return 0;
	}
}

int pintcomp (const int *left, const int *right) {
	return intcomp(*left, *right);
}

int ullcomp (const ull left, const ull right) {
	if (left < right) {
		return -1;
	} else if (left > right) {
		return +1;
	} else {
		return 0;
	}
}

int pullcomp (const ull *left, const ull *right) {
	return ullcomp(*left, *right);
}

int sllcomp (const sll left, const sll right) {
	if (left < right) {
		return -1;
	} else if (left > right) {
		return +1;
	} else {
		return 0;
	}
}

int psllcomp (const sll *left, const sll *right) {
	return sllcomp(*left, *right);
}

int phwAcomp (const hw *left, const hw *right) {
	return intcomp(left->a, right->a);
}

int phwBcomp (const hw *left, const hw *right) {
	return intcomp(left->b, right->b);
}

int phwABcomp (const hw *left, const hw *right) {
	int x = phwAcomp(left, right);
	if (x) return x;
	return phwBcomp(left, right);
}

int phwllAcomp (const hwll *left, const hwll *right) {
	return sllcomp(left->a, right->a);
}

int phwllBcomp (const hwll *left, const hwll *right) {
	return sllcomp(left->b, right->b);
}

int phwllABcomp (const hwll *left, const hwll *right) {
	int x = phwllAcomp(left, right);
	if (x) return x;
	return phwllBcomp(left, right);
}

int pstrAcomp (const struct_a *left, const struct_a *right) {
	int x;
	if (x = ullcomp(left->t, right->t)) return x;
	if (x = ullcomp(left->s, right->s)) return x;
	if (x = intcomp(left->c, right->c)) return x;
	return 0;
}

int bitlet (char c) {
	return (1 << (c - 'a'));
}

ull ullabs (ull a, ull b) {
	if (a >= b) {
		return a - b;
	} else {
		return b - a;
	}
}

sll sllabs (sll a, sll b) {
	if (a >= b) {
		return a - b;
	} else {
		return b - a;
	}
}

sll nibutanlobo (bool (*func)(sll arg), sll ok, sll ng) {
	while (sllabs(ok, ng) > 1) {
		sll med = (ok + ng) / 2;
		if (func(med)) {
			ok = med;
		} else {
			ng = med;
		}

		// printf("debug: [%lld %lld)\n", ok, ng);
	}

	if (!func(ok)) return ok * 2 - ng;
	return ok;
}


ull solve () {
	sll i, j, ki;
	sll result = 0;
	// sll result;
	ull sum = 0;
	// qsort????"p"ullcomp???

	sll min, max;
	sll minindex, maxindex;

	min = max = a[0];
	minindex = maxindex = 0;
	for (i = 0; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
			minindex = i;
		} else if (a[i] > max) {
			max = a[i];
			maxindex = i;
		}
	}

	m = 0;

	bool ispositive;
	if (min < 0 && max > 0) {
		if (min + max >= 0) {
			// +
			ispositive = true;
			for (i = 0; i < n; i++) {
				if (i == maxindex) continue;
				if (a[i] <= 0) {
					arr[m].a = maxindex;
					arr[m].b = i;
					m++;

					a[i] += max;
				}
			}
		} else {
			// -
			ispositive = false;
			for (i = 0; i < n; i++) {
				if (i == minindex) continue;
				if (a[i] >= 0) {
					arr[m].a = minindex;
					arr[m].b = i;
					m++;

					a[i] += min;
				}
			}
		}
	} else {
		if (min == max) {
			goto fail;
		} else if (max <= 0) {
			ispositive = false;
		} else if (min >= 0) {
			ispositive = true;
		}
	}

	if (ispositive) {
		for (i = 0; i < n; i++) {
			if (i == 0) {
				if (a[i] == 0) {
					for (j = 0; j < n; j++) {
						if (a[j] != 0) break;
					}

					arr[m].a = j;
					arr[m].b = i;
					m++;

					a[i] += a[j];
				}
				continue;
			}

			if (a[i] < a[i - 1]) {
				arr[m].a = i - 1;
				arr[m].b = i;
				m++;

				a[i] += a[i - 1];
			}
		}
	} else {
		for (i = n - 1; i >= 0; i--) {
			if (i == n - 1) {
				if (a[i] == 0) {
					for (j = 0; j < n; j++) {
						if (a[j] != 0) break;
					}

					arr[m].a = j;
					arr[m].b = i;
					m++;

					a[i] += a[j];
				}
				continue;
			}

			if (a[i] > a[i + 1]) {
				arr[m].a = i + 1;
				arr[m].b = i;
				m++;

				a[i] += a[i + 1];
			}
		}
	}


	printf("%llu\n", m);
	for (i = 0; i < m; i++) {
		printf("%lld %lld\n", arr[i].a + 1, arr[i].b + 1);
	}

	// printf("%llu\n", result);
	// puts(s);

	return 0;

	success:
	puts("YES");
	// puts("Yes");
	// printf("%llu\n", result);
	return 0;

	fail:
	// puts("NO");
	// puts("No");
	puts("0");
	return 1;
}

int main (void) {
	int i, j;
	int x, y;

	// scanf("%llu%llu", &h, &w);
	scanf("%llu", &n, &k);
	// scanf("%llu", &vua, &vub, &vuc, &vud);
	// scanf("%s", s);
	// scanf("%s", t);
	// scanf("%llu", &k);
	for (i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}
	// for (i = 0; i < m; i++) {
	// 	scanf("%lld", &b[i]);
	// }
	// for (i = 0; i < h; i++) {
	// 	for (j = 0; j < w; j++) {
	// 		scanf("%llu", &a[i][j]);
	// 	}
	// }
	// for (i = 0; i < n; i++) {
	// 	scanf("%llu%llu%d", &arr[i].s, &arr[i].t, &arr[i].c);
	// 	arr[i].c--;
	// }

	solve();

	// for (i = 0; i < n; i++) {
	// 	// scanf("%llu%llu", &vua, &vub);
	// 	scanf("%s", s);
	// 	solve();
	// }

	return 0;
} 