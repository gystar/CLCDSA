#include<stdio.h>
int main(void){
	int N, T, A, H[1000], i, j,min_i;
	double	K[1000],min;
	scanf("%d", &N);
	scanf("%d %d", &T, &A);
	for (i = 0; i < N; i++){
		scanf("%d", &H[i]);
	}
	for (i = 0; i < N; i++){
		K[i] = (double)T - H[i] * 0.006;
		K[i] = K[i] - (double)A;
		if (K[i] < 0){
			K[i] = K[i] * -1.0;
		}
	}
	min = K[0];
	min_i = 0;
	for (i = 1; i < N; i++){
		if (min>K[i]){
			min = K[i];
			min_i = i;
		}
	}
	printf("%d", min_i+1);

		return 0;
} 