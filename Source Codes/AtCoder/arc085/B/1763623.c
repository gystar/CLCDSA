/*
exit
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
 
#define BIG 2000000007
 
#define MOD 1000000007
typedef unsigned long long ull;
typedef   signed long long sll;

#define N_MAX 2000
#define M_MAX 100000
 
typedef struct {
	int a;
	int b;
} hw;

typedef struct {
	sll a;
	sll b;
} hwll;
 
 
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
sll va, vb, vc, vd, ve, vf;
ull a[N_MAX];
// sll a[N_MAX];
// ull b[N_MAX];
// sll b[M_MAX];
// ull dp[N_MAX];
ull dp[N_MAX + 1][N_MAX + 1];
// ull dp[N_MAX][M_MAX + 1];
// char s[N_MAX + 1];
// char t[N_MAX + 1];
// char s[N_MAX][M_MAX + 1];
// hw arr[N_MAX];
// hwll arr[N_MAX];
// hw brr[M_MAX];
// ull digitdp[102][   2][    2];
//          pos  less  carry
 
void swap_adj(ull *a, ull *b){
	ull tmp = *b;
	*b = *a;
	*a = tmp;
	return;
}
 
ull divide(ull a, ull b){
	ull x = MOD - 2;
	ull ans = 1;
	while (x) {
		if (x & 1) ans = (ans * b) % MOD;
		b = (b * b) % MOD;
		x /= 2;
	}
	return (a * ans) % MOD;
}
 
int digits(ull x){
	int i = 1;
	while (x >= 10) {
		x /= 10;
		i++;
	}
	return i;
}
 
ull min(ull x, ull y){
	return (x < y) ? x : y;
}
 
ull gcd(ull x, ull y){
	if (x < y) {
		return gcd(y, x);
	} else if (y == 0) {
		return x;
	} else {
		return gcd(y, x % y);
	}
}
 
ull bitpow(ull a, ull x){
	ull result = 1;
	while (x) {
		if (x & 1) {
			result *= a;
			result %= MOD;
		}
		x /= 2;
		a = (a * a) % MOD;
	}
	return result;
}
 
// int nextroute(int arr[]){
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
 
int nibutan_target(ull target){
	ull maxdist = (target * (target + 1) / 2); // ??target???????????[-maxdist, maxdist]
	return (n <= maxdist);
}
 
int targetdig(ull x, int index /* 1-indexed */){
	// static...?
	int posmax = digits(x);
	if (posmax < index) return -1;
	while (posmax > index) {
		posmax--;
		x /= 10;
	}
	return x % 10;
}
 
int intcomp(const void *left, const void *right){
	if ((*(int*)left) < (*(int*)right)) {
		return -1;
	} else if ((*(int*)left) > (*(int*)right)) {
		return +1;
	} else {
		return 0;
	}
}

int ullcomp(const void *left, const void *right){
	if ((*(ull*)left) < (*(ull*)right)) {
		return -1;
	} else if ((*(ull*)left) > (*(ull*)right)) {
		return +1;
	} else {
		return 0;
	}
}

int sllcomp(const void *left, const void *right){
	if ((*(sll*)left) < (*(sll*)right)) {
		return -1;
	} else if ((*(sll*)left) > (*(sll*)right)) {
		return +1;
	} else {
		return 0;
	}
}

int hwAcomp(const void *left, const void *right){
	return intcomp(&(((hw*)left)->a), &(((hw*)right)->a));
}
 
int hwBcomp(const void *left, const void *right){
	return intcomp(&(((hw*)left)->b), &(((hw*)right)->b));
}
 
int hwABcomp(const void *left, const void *right){
	int x = hwAcomp(left, right);
	if (x) return x;
	return hwBcomp(left, right);
}

int hwllAcomp(const void *left, const void *right){
	return sllcomp(&(((hw*)left)->a), &(((hw*)right)->a));
}
 
int hwllBcomp(const void *left, const void *right){
	return sllcomp(&(((hw*)left)->b), &(((hw*)right)->b));
}
 
int hwllABcomp(const void *left, const void *right){
	int x = hwllAcomp(left, right);
	if (x) return x;
	return hwllBcomp(left, right);
}

int bitlet(char c){
	return (1 << (c - 'a'));
}


ull seg[262144];
ull baseIndex;

int initSeg(ull a[], int num) {
	int i;

	baseIndex = 1;
	while (baseIndex < num) baseIndex *= 2;

	for (i = 0; i < baseIndex; i++) {
		seg[baseIndex + i] = (i < num ? a[i] : 0);
	}
	for (i = baseIndex - 1; i >= 1; i--) {
		seg[i] = seg[i * 2] + seg[i * 2 + 1];
	}

}

ull plainAnswerSeg(int num) {
	ull lookIndex = baseIndex;
	ull result = 0;

	while (num) {
		if (num % 2 == 1) {
			result += seg[lookIndex + num - 1];
		}

		lookIndex /= 2;
		num /= 2;
	}

	return result;
}

ull gapAnswerSeg(int start, int end){
	if (start > end) return gapAnswerSeg(end, start);
	return plainAnswerSeg(end) - plainAnswerSeg(start - 1);
}

ull ulldiff(ull a, ull b){
	if (a >= b) {
		return a - b;
	} else {
		return b - a;
	}
}

ull solve(){
	int i, j, ki;

	ull *a_1ind = a - 1;

	for (i = 0; i < n; i++) {
		ull cardNum;

		if (i == 0) {
			dp[n][i] = ulldiff(a[n - 1], vb);
			dp[i][n] = ulldiff(va, a[n - 1]);
		} else {
			dp[n][i] = dp[i][n] = ulldiff(a[n - 1], a[i - 1]);
		}
	}

	for (i = n - 1; i > 0; i--) {
		ull samenum;

		samenum = 0;
		j = i;
		while (++j <= n) {
			if (dp[j][i] > samenum) samenum = dp[j][i];
		}
		for (j = 0; j < i; j++) {
			dp[j][i] = samenum;
		}

		samenum = BIG;
		j = i;
		while (++j <= n) {
			if (dp[i][j] < samenum) samenum = dp[i][j];
		}
		for (j = 0; j < i; j++) {
			dp[i][j] = samenum;
		}
	}

	// for (i = 0; i <= n; i++) {
	// 	for (j = 0; j <= n; j++) {
	// 		if (i == j) {
	// 			printf("===");
	// 		} else {
	// 			printf("%03llu", dp[i][j]);
	// 		}
	// 		putchar(' ');
	// 	}
	// 	putchar('\n');
	// }

	ull result = 0;
	i = 0;
	while (++i <= n) {
		if (dp[i][0] > result) result = dp[i][0];
	}

	printf("%llu\n", result);
	return 0;
}
 
int main(void){
	int i, j;
	int x, y;

	// scanf("%llu%llu", &h, &w);
	scanf("%llu%llu%llu", &n, &va, &vb);
	for (i = 0; i < n; i++) {
		scanf("%llu", &a[i]);
	}

	solve();

	return 0;
} 