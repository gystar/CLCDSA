/*
AtCoder Regular Contest 024 A - ???????
??:
*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define max(x,y)(x<y?y:x)
#define min(x,y)(x<y?x:y)
#define int long long

int compare(const void *a, const void *b) {
	return *(int*)b - *(int*)a;
}

//???
//scanf("%d", &N);
//for (i; i < N; ++i) {
//	scanf("%d", &A[i]);
//	if (b[A[i]] == 1) {
//		ans = max(ans, i - j);
//		while (b[A[i]] == 1) {
//			b[A[j++]] = 0;
//		}
//	}
//	b[A[i]] = 1;
//}
//ans = max(ans, i - j);
//printf("%d\n", ans);

//????????
//static int N, i, j, ans;
//static int A, B;
//static char A[50][51];
//static int cnt, max;
//char *max_name;
//
//scanf("%d", &N);
//for (i = 0; i < N; i++) {
//	scanf("%s", A[i]);
//}
//max_name = A[0];
//for (i = 0; i < N; i++) {
//	cnt = 0;
//	for (j = 0; j < N; j++) {
//		if (strcmp(A[i], A[j]) == 0) {
//			cnt++;
//		}
//		if (cnt > max) {
//			max = cnt;
//			max_name = A[i];
//		}
//	}
//}
//printf("%s\n", max_name);

//#define DEBUG1
//#define DEBUG2
//#define DEBUGF

int main() {
	//static int N, i, j, ans;
	static int AN, BN, A[100] = { 0 }, B[100] = { 0 }, i, j, ans;
	//static int A, B;
	//static int A, B, C;
	static int a[31] = { 0 }, b[31] = { 0 }, cnt = 0;
	//static char A[50][51];
	//static int cnt, max;
	//char *max_name;
	//static int ans;

	scanf("%d %d", &AN, &BN);
	for (i = 0; i < AN; i++) {
		scanf("%d", &A[i]);
		a[A[i]-10]++;
	}
	for (i = 0; i < BN; i++) {
		scanf("%d", &B[i]);
		b[B[i]-10]++;
	}
	for (i = 0; i < 31; i++) {
		cnt = cnt + min(a[i], b[i]);
	}
	ans = cnt;
	//qsort(A, N, sizeof(int), compare);

	//ans = ;
	printf("%d\n", ans);
	//printf("%s\n", max_name);

#ifdef DEBUGF
	getch();
#endif
	return 0;
} 