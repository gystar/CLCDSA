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
int Max(int a, int b) { if (a>b) { return a; }return b; }
int Min(int a, int b) { if (a<b) { return a; }return b; }
long long llmax(long long a, long long b) { return a > b ? a : b; }
long long llmin(long long a, long long b) { return a < b ? a : b; }
double dmax(double a, double b) { return a > b ? a : b; }
double dmin(double a, double b) { return a < b ? a : b; }
int cmp(const void *a, const void *b) { return *(TYPE *)a - *(TYPE *)b; }
int cmp_r(const void *a, const void *b) { return *(TYPE *)b - *(TYPE *)a; }
int char_cmp(const void *a, const void *b) { return strcmp((char *)a, (char *)b); }
int char_cmp_r(const void *a, const void *b) { return strcmp((char *)b, (char *)a); }
void swap(int *a, int *b) { int t = *a; *a = *b; *b = t; }

//A
//int A[100001] = { 0 };
//int used[100001] = { 0 };
//int main() {
//	int N, M;
//	scanf("%d%d", &N, &M);
//	for (int m = 0; m < M; m++) {
//		scanf("%d", &A[m]);
//	}
//
//	for (int m = M - 1; m >= 0; m--) {
//		if (!used[A[m]]) {
//			printf("%d\n", A[m]);
//			used[A[m]]=1;
//		}
//	}
//	for (int m = 1; m < N + 1; m++) {
//		if (!used[m]) {
//			printf("%d\n", m);
//		}
//	}
//#ifdef DEBUGF
//	getch();
//#endif
//	return 0;
//}

//B
double ABS(double a) {
	return a >= 0 ? a : -a;
}
/// /////////////////////////////////////////////
/// <summary> 
/// ??????
/// </summary> 
/// /////////////////////////////////////////////
double distance(
	double x0,//????
	double y0,//????
	double a1,//???????
	double b1,//???????
	double a2,//???????
	double b2 //???????
) {
	double A, B, C;
	A = b2 - b1;
	B = a1 - a2;
	C = a2 * b1 - a1 * b2;
	return ABS(A * x0 + B * y0 + C) / hypot(A, B);
}

int main() {
	//double ans = distance(0, 0, 0, -14.142, 14.142, 0);
	//printf("%5.2f",ans );
	double X, Y;
	int  N;
	scanf("%lf%lf", &X, &Y);
	scanf("%d", &N);
	double *x = (double*)malloc(sizeof(double)*N);
	double *y = (double*)malloc(sizeof(double)*N);
	for (int i = 0; i < N; i++) {
		scanf("%lf%lf", &x[i], &y[i]);
}
	double ans = distance(X, Y, x[N - 1], y[N - 1], x[0], y[0]);
	for (int i = 1; i < N; i++) {
		ans = dmin(ans, distance(X, Y, x[i - 1], y[i - 1], x[i], y[i]));
	}
	printf("%.12lf\n", ans);
#ifdef DEBUGF
	getch();
#endif
	return 0;
} 