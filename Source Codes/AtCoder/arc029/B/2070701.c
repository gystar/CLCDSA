#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int N, i;
	double A, B, tmp, x, y, E, ABsqrtE, F;
	scanf("%lf%lf", &A, &B);
	if(A > B){
		tmp = A;
		A = B;
		B = tmp;
	}
	scanf("%d", &N);
	double *C = (double *)malloc(sizeof(double) * N);
	double *D = (double *)malloc(sizeof(double) * N);
	int *ans = (int *)malloc(sizeof(int) * N);
	for(i = 0; i < N; i++){
		scanf("%lf%lf", &C[i], &D[i]);
		if(C[i] > D[i]){
			tmp = C[i];
			C[i] = D[i];
			D[i] = tmp;
		}
		ans[i] = 0;
	}
	F = A * A + B * B;
	for(i = 0; i < N; i++){
		E = F - C[i] * C[i];
		if(A <= C[i] && B <= D[i]){
			ans[i] = 1;
		}
		else if(E > 0){
			ABsqrtE = A * B * sqrt(E);
			x = (A * A * C[i] + ABsqrtE) / F;
			y = (B * B * C[i] - ABsqrtE) / F;
			if(0 < x && x < C[i] && 0 < y && y < C[i]){
				if(x * B / A + y * A / B <= D[i]){
					ans[i] = 1;
				}
			}
			x = (A * A * C[i] - ABsqrtE) / F;
			y = (B * B * C[i] + ABsqrtE) / F;
			if(0 < x && x < C[i] && 0 < y && y < C[i]){
				if(x * B / A + y * A / B <= D[i]){
					ans[i] = 1;
				}
			}
		}
	}
	for(i = 0; i < N; i++){
		if(ans[i] == 1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
} 