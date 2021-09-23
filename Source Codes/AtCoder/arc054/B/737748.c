#include <math.h>
#include <stdio.h>

int main(void)
{
	double P,res;
	scanf("%lf",&P);
	if ((double)3 / 2 * log2((double)2 * P / 3 * log((double)2)) >= 0)
		res = (double)3 / 2 * log2((double)2 * exp(1) * P / 3 * log((double)2));
	else
		res = P;
	printf("%.10f\n", res);
	return 0;
} 