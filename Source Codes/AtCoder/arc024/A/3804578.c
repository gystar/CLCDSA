#include <stdio.h>

int main()
{
	int L, R;
	scanf("%d%d", &L, &R);
	int l[L], r[R];
	int pair=0;
	int i, j;
	for (i = 0; i < L ; i++) {
		scanf("%d", &l[i]);
	}
	for (j = 0; j < R; j++) {
		scanf("%d", &r[j]);
	}
	for (i = 0; i < L; i++) {
		for (j = 0; j < R; j++) {
			if (l[i] == r[j]) {
				pair++;
				l[i] = 100;
				r[j] = 0;
			}
		}
	}
	printf("%d\n", pair);
	return 0;
} 