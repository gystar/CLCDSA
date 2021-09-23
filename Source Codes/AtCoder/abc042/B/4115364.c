#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	return strcmp(*(char**)a, *(char**)b);
}

int main(void){
	char **str;
	int n, l;
	scanf("%d %d", &n, &l);
	str = malloc(sizeof(char*) * n);
	for(int i = 0; i < n; i++){
		str[i] = malloc(sizeof(char) * (l + 5));
		scanf("%s", str[i]);
	}
	qsort(str, n, sizeof(char*), cmp);
	for(int i = 0; i < n; i++)
		printf("%s", str[i]);
	putchar('\n');
	return 0;
} 