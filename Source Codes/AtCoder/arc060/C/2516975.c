#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, L, Q, a, b, i, j, l, h, r, tmp;
	scanf("%d", &N);
	int *x = (int *)malloc(sizeof(int) * N);
	for(i = 0; i < N; i++){
		scanf("%d", &x[i]);
	}
	scanf("%d", &L);
	int **dab = (int **)malloc(sizeof(int *) * N);
	for(i = N - 1; i >= 0; i--){
		dab[i] = (int *)malloc(sizeof(int) * 20);
		l = -1;
		r = N;
		while(r - l > 1){
			h = (l + r) / 2;
			if(x[i] + L < x[h]){
				r = h;
			}
			else{
				l = h;
			}
		}
		dab[i][0] = l;
		for(j = 0; j < 19; j++){
			dab[i][j + 1] = dab[dab[i][j]][j];
		}
	}
	scanf("%d", &Q);
	int *ans = (int *)malloc(sizeof(int) * Q);
	for(i = 0; i < Q; i++){
		scanf("%d%d", &a, &b);
		a--;
		b--;
		if(a > b){
			tmp = a;
			a = b;
			b = tmp;
		}
		ans[i] = 1;
		for(j = 19; j >= 0; j--){
			if(dab[a][j] < b){
				a = dab[a][j];
				ans[i] += (1 << j);
			}
		}
	}
	for(i = 0; i < Q; i++){
		printf("%d\n", ans[i]);
	}
	return 0;
} 