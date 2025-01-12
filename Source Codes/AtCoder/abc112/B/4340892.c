#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int n_route = 0;
	int t_limit = 0;
	int a, b;
	int i = 0;
	int min_cost = 0x7ffff;
	scanf("%d %d", &n_route, &t_limit);
	for(i = 0; i < n_route; i++) {
		scanf("%d %d", &a, &b);
		if (t_limit < b) {
			continue;
		}
		if (a < min_cost) {
			min_cost = a;
		}
	}
	if (min_cost == 0x7ffff) {
		printf("TLE\n");
	} else {
		printf("%d\n", min_cost);
	}
	return 0;
} 