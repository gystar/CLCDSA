#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>  
#include <stdbool.h>   
#define inf (INT_MAX-1)
#define INF 9223372036854775807;
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
#define bool    _Bool
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


// ?????
int adjacent[50][50];

//????
int visited[50];

//?????? DFS ??????????????
int dfs(int v) {
	visited[v] = 1;
	int v2; //????
	for (v2 = 0; v2 < 50; v2++) {
		if (visited[v2] == 0 && adjacent[v][v2] == 1) {
			dfs(v2);
		}
	}
}

int main() {
	// ?????????
	for (int j = 0; j < 50; j++) {
		for (int i = 0; i < 50; i++) {
			adjacent[j][i] = 0;
		}
	}
	//????????
	for (int i = 0; i < 50; i++) {
		visited[i] = 0;
	}

	//??
	int N, M;
	int cnt = 0;
	int ans = 0;
	scanf("%d%d", &N, &M);
	int *A = (int*)malloc(sizeof(int)*M);
	int *B = (int*)malloc(sizeof(int)*M);
	for (int i = 0; i < M; i++) {
		scanf("%d%d", &A[i], &B[i]);
		adjacent[A[i] - 1][B[i] - 1] = 1;
		adjacent[B[i] - 1][A[i] - 1] = 1;
	}

	//???????????????????
	int i;
	for (i = 0; i < M; i++) {
		//????????
		for (int l = 0; l < 50; l++) {
			visited[l] = 0;
		}

		//????
		adjacent[A[i] - 1][B[i] - 1] = 0;
		adjacent[B[i] - 1][A[i] - 1] = 0;

		dfs(0);//??????
		//??????
		//puts("??????");
		//for (int j = 0; j < N; j++) {
		//	printf("%d\n", visited[j]);
		//}

		for (int k = 0; k < N; k++) {
			if (visited[k] == 1) {
				cnt++;
			}
		}
		if (cnt < N) {//????????
			ans++;
		}
		//????????
		adjacent[A[i] - 1][B[i] - 1] = 1;
		adjacent[B[i] - 1][A[i] - 1] = 1;
		//?????????
		cnt = 0;
	}
	printf("%d\n", ans);

#ifdef DEBUGF
	getch();
#endif
	return 0;
} 