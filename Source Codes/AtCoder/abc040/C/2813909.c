#include <stdio.h>
#define A(i) ((i) >= 0 && (i) < n ? a[i] : INF)
#define COST(i) ((i) >= 0 && (i) < n ? cost[i] : INF)
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define ABS(a) ((a) < 0 ? -(a) : (a))
#define INF 20000

int main(void) {
	int i, n, a[100000], cost[100000];
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	cost[0] = 0;
	for (i = 1; i < n; i++)
		cost[i] = MIN(ABS(A(i-2)-A(i))+COST(i-2), ABS(A(i-1)-A(i))+COST(i-1));
	
	printf("%d\n", cost[n-1]);
	
	return 0;
} 