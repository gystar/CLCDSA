/*

??:
*/
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>  
#include <stdbool.h>   
#define inf (INT_MAX-1)
#define INF 9223372036854775807
#define PI 3.14159265358979323846;
#define EPS 1e-10
#define sq(n) ((n)*(n))
#define rep(i,n) for(i=0;i<n;i++)
#define rev(i,n) for(i=n-1;i>=0;i--)
/*
#define sort(a,n) qsort(a,n,sizeof(TYPE),cmp)
#define sort_r(a,n) qsort(a,n,sizeof(TYPE),cmp_r)
*/
#define chsort(s,n) qsort(s,n,sizeof(char),cmp)
#define chsort_r(s,n) qsort(s,n,sizeof(char),char_cmp_r)
#define TYPE long long
#define ll long long
#define MEMSET(a) memset(a,0,sizeof(a))
#define MEMSET_U(a) memset(a,-1,sizeof(a))
const int mod = (int)1e09 + 7;

//#define DEBUG1
//#define DEBUG2
//#define DEBUGF
#define DUMMY

int in(void) { int i; scanf("%d", &i); return i; }
long long llin(void) { long long i; scanf("%lld", &i); return i; }
double din(void) { double i; scanf("%lf", &i); return i; }
void chin(char s[]) { scanf("%s", s); }

void print(int a) { printf("%d\n", a); }
void llprint(long long a) { printf("%lld\n", a); }
void dprint(double a) { printf("%.10f\n", a); }
void print2(int a, int b) { printf("%d %d\n", a, b); }
int Max(int a, int b) { if (a > b) { return a; }return b; }
int Min(int a, int b) { if (a < b) { return a; }return b; }
long long llmax(long long a, long long b) { return a > b ? a : b; }
long long llmin(long long a, long long b) { return a < b ? a : b; }
double dmax(double a, double b) { return a > b ? a : b; }
double dmin(double a, double b) { return a < b ? a : b; }
//long long llmax(long long a, long long b) { return a > b ? a : b; }
//long long llmin(long long a, long long b) { return a < b ? a : b; }
//double dmax(double a, double b) { return a > b ? a : b; }
int cmp(const void *a, const void *b) { return *(TYPE *)a - *(TYPE *)b; }
int cmp_r(const void *a, const void *b) { return *(TYPE *)b - *(TYPE *)a; }
int char_cmp(const void *a, const void *b) { return strcmp((char *)a, (char *)b); }
int char_cmp_r(const void *a, const void *b) { return strcmp((char *)b, (char *)a); }
void swap(int *a, int *b) { int t = *a; *a = *b; *b = t; }

/// /////////////////////////////////////////////
/// <summary> 
/// ????
/// </summary> 
/// /////////////////////////////////////////////
bool is_prime(//????
	int n
) {
	for (int i = 2; i*i <= n; i++) {
		if (n%i == 0)return false;
	}
	return n != 1;//???????
}

/// /////////////////////////////////////////////
/// <summary> 
/// 10??????????????
/// </summary> 
/// /////////////////////////////////////////////
int a[10] = { 0 };
void abc(
	int x//10????
) {
	a[0] = x % 10;
	for (int i = 1; i < 10; i++) {
		a[i] = (int)(x / pow(10, (double)i)) % 10;
	}
}

int main() {
	int N;
	int chk = 0;//1:?????
	int sum = 0;
	int ans;
	scanf("%d", &N);

	chk = is_prime(N);//???

	if (chk == 0) {
		abc(N);
		if (a[0] % 2 != 0 && a[0] != 5) {
			for (int i = 0; i < 10; i++) {
				sum += a[i];
			}
			if (sum % 3 != 0 && N!=1) {
				chk = 1;
			}
		}

	}
	if (chk == 1) {
		puts("Prime");
	}
	else {
		puts("Not Prime");
	}

#ifdef DEBUGF
	getch();
#endif
	return 0;
} 