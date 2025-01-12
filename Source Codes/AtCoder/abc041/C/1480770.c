#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int id;
	long long height;
} p_t;

static int cmp(const void *a, const void *b);

int main(int argc, char *argv[])
{
	int i, N;
	static p_t list[100000];
	scanf("%d", &N);
	for ( i = 0; i < N; i++ ){
		scanf("%lld", &list[i].height);
		list[i].id = i+1;
	}
	qsort(list, N, sizeof(p_t), cmp);
	for ( i = 0; i < N; i++ ){
		printf("%d\n", list[i].id);
	}
	return 0;
}

static int cmp(const void *a, const void *b)
{
	return (int)( ((p_t *)b)->height - ((p_t *)a)->height);
} 