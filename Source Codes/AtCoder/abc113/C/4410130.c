#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int p, no;
	long y;
}city;

int comp(const void *a, const void *b){
	if((*((city**)a))->p != (*((city**)b))->p)return (*((city**)a))->p > (*((city**)b))->p;
	else return (*((city**)a))->y > (*((city**)b))->y;
}

int main(void){
	int n, m;
	scanf("%d %d", &n, &m);
	city **ctys = malloc(sizeof(city*) * m), **input = malloc(sizeof(city*) * m);
	for(int i = 0; i < m; i++){
		ctys[i] = input[i] = malloc(sizeof(city));
		scanf("%d %ld", &(input[i]->p), &(input[i]->y));
	}
	qsort(ctys, m, sizeof(city*), comp);
	int tmp = 0;
	int count = 0;
	for(int i = 0; i < m; i++){
		if(tmp != ctys[i]->p){
			tmp = ctys[i]->p;
			count = 0;
		}
		count++;
		ctys[i]->no = count;
	}
	for(int i = 0; i < m; i++)
		printf("%06d%06d\n", input[i]->p, input[i]->no);
	return 0;
} 