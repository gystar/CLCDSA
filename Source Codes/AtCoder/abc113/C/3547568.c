#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int P, Y, tmp1, tmp2;
} s;

int compare1(const void *x, const void *y)
{
	return ((s*)x)->Y - ((s*)y)->Y;
}

int compare2(const void *x, const void *y)
{
	return ((s*)x)->tmp1 - ((s*)y)->tmp1;
}

int main(void)
{
	int N, M, tmp2[100000] = {0}, i;
	s tmp1[100000];
	scanf("%d%d", &N, &M);
	for (i = 0; i < M; ++i) {
		scanf("%d%d", &tmp1[i].P, &tmp1[i].Y);
		tmp1[i].tmp1 = i;
	}
	qsort(tmp1, M, sizeof(s), compare1);
	for (i = 0; i < M; ++i) {
		++tmp2[tmp1[i].P - 1];
		tmp1[i].tmp2 = tmp2[tmp1[i].P - 1];
	}
	qsort(tmp1, M, sizeof(s), compare2);
	for (i = 0; i < M; ++i) printf("%06d%06d\n", tmp1[i].P, tmp1[i].tmp2);
	return 0;
} 