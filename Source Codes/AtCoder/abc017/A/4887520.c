#include<stdio.h>

int main(void) {
	double i,num,wari,sum=0;
	for(i=0;i<3;i++) {
		scanf("%lf %lf",&num,&wari);
		sum += num*(wari/10);
	}
	printf("%g\n",sum);
	return 0;
} 