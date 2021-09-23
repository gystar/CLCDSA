#include <stdio.h>
int main(void){
	double N,K;
	scanf("%lf%lf",&N,&K);
	double p;
	p = ((K-1)*(N-K)*6+(N-1)*3+1)/(N*N*N);
	printf("%.20lf\n",p);
	return 0;
} 