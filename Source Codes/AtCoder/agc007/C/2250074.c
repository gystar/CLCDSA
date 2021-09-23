#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, i;
	double ans = 0;
	scanf("%d", &N);
	double *d1 = (double *)malloc(sizeof(double) * (N + 1));
	double *x = (double *)malloc(sizeof(double) * (N + 1));
	scanf("%lf%lf", &d1[N], &x[N]);
	for(i = N; i > 1; i--){
		d1[i - 1] = (2 * (i + 1) * d1[i] + 5 * x[i]) / (2 * i);
		x[i - 1] = ((i + 2) * x[i]) / i;
	}
	for(i = 1; i <= N; i++){
		ans += d1[i] + ((2 * i - 1) * x[i]) / 2;
	}
	printf("%.12lf\n", ans);
	return 0;
} 