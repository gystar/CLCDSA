#include <stdio.h>

int main()
{
	double height, bmi;
	scanf("%lf%lf", &height, &bmi);
	printf("%lf\n", (height/100)*(height/100)*bmi);
	return 0;
} 