#include <stdio.h>
#include <math.h>
int main(void){
	double n,m,a;
	scanf("%lf%lf",&n,&m);
	a=(n<12)?fabs(30*(n+(double)(m/60))-6*m):fabs(30*(n-12+(double)(m/60))-6*m);
	if(a>180) a=360-a;
	printf("%f\n",a);
	return 0;
} 