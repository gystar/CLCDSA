#include <stdio.h>

int main(){
	double h, b;
	scanf("%lf%lf", &h, &b);
	printf("%lf\n", b * (h / 100) * (h / 100));
	return 0;
} 