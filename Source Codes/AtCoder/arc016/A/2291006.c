/*
AtCoder Regular Contest 016 A - ?????? ??:
*/

#include<stdio.h>

//#define DEBUG1
//#define DEBUGF

int max(int a, int b) { return a >= b ? a : b; }

int main() {
	int n, m;
	int ans;
	scanf("%d", &n);
	scanf("%d", &m);

	for (int i = 1; i <= n; i++) {
		if (i != m) {
			ans = i;
		}
	}

	/*??*/
	printf("%d", ans);
	printf("\n");
#ifdef DEBUG1
	for (int i = 1; i <= n; i++) {
		scanf("%f", &MT[i]);
		scanf("%f", &mt[i]);
}
	for (int i = 1; i < 6; i++) {
		printf(" %d", ans[i]);
	}
#endif
#ifdef DEBUGF
	getch();
#endif
	return 0;
} 