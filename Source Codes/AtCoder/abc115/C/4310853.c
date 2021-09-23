#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b){
	return *(int*)b - *(int*)a;
}

int main(void){
	int n, k;
	int *h;
	scanf("%d %d", &n, &k);
	h = malloc(sizeof(int) * n);
	for(int i = 0; i < n; i++)
		scanf("%d", h + i);
	qsort(h, n, sizeof(int), comp);
	int min = h[0];
	for(int i = 0; i < n - k + 1; i++)
		if(min > h[i] - h[i + k - 1])min = h[i] - h[i + k- 1];
	printf("%d\n", min);
	return 0;
} 