#include <stdio.h>
#include <math.h>
int main(void){
	double x;
	scanf("%lf",&x);
	printf("%lld\n",(long long int)(sqrt(sqrt(x))));
	return 0;
} 