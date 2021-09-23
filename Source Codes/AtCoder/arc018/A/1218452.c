#include <stdio.h>

int main(void)
{
	double height,weight,bmi;
	scanf("%lf %lf",&height,&bmi);
	
	height=height/100;
	
	weight=height*height*bmi;
	printf("%lf\n",weight);
	return 0;
} 