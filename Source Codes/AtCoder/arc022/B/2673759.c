/*
AtCoder Regular Contest 021 b - ??????
??:
*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define max(x,y)(x<y?y:x)
#define int long long

//#define DEBUG1
//#define DEBUG2
//#define DEBUGF

int main() {
	static int N, i, j, ans, A[100005], b[100005];
	scanf("%d", &N);
	for (i; i < N; ++i) {
		scanf("%d", &A[i]);
		if (b[A[i]] == 1) {
			ans = max(ans, i - j);
			while (b[A[i]] == 1) {
				b[A[j++]] = 0;
			}
		}
		b[A[i]] = 1;
	}
	ans = max(ans, i - j);
	printf("%d\n", ans);

#ifdef DEBUGF
	getch();
#endif
	return 0;
} 