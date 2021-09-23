#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define lli long long int
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define	abs(a) ((a)<0?-(a):(a))



int main(void){
	double p;
	scanf("%lf",&p);
	double x = max(0,-1.5*(log2(1.5/p/log(2))));
	printf("%.10lf\n", p/exp2(x/1.5)+x);
	return 0;
} 