#include<stdio.h>
#include<stdlib.h>
///*
void sort_N(int *x,int n);

int main() {

	int i, n, *ary;
	int counter=0;

	scanf("%d", &n);

	ary = (int*)calloc(2 * n, sizeof(int));
	if (ary == NULL) {
		return 0;
	}

	for (i = 0; i < 2 * n; i++) {
		scanf("%d", &ary[i]);
	}

	sort_N(ary, 2 * n);

	for (i = 0; i < n; i++) {
		counter += ary[2 * i];
	}

	//for (i = 0; i < 2 * n; i++) {
		//printf("%d ", ary[i]);
	//}
	//printf("\n");

	printf("%d\n", counter);

	free(ary);

	return 0;
}

void sort_N(int *x,int n) {

	int i,j,fake;
	
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1;j++){
			if (x[j] > x[j + 1]) {
				fake = x[j];
				x[j] = x[j + 1];
				x[j + 1] = fake;
			}
		}
	}
}
//*/ 