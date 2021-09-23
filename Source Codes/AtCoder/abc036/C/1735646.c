#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x, idx;
} Rec;

int compare(const void *a, const void *b) {
	return ((const Rec *)a)->x - ((const Rec *)b)->x;
}

Rec a[100000];
int ans[100000];

int main(void) {
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		a[i] = (Rec){x, i};
	}

	qsort(a, n, sizeof(Rec), &compare);

	int num = 0;
	for (int i = 0; i < n; i++) {
		if (i > 0 && a[i].x != a[i - 1].x)
			num++;
		ans[a[i].idx] = num;
	}

	for (int i = 0; i < n; i++)
		printf("%d\n", ans[i]);

	return 0;
} 