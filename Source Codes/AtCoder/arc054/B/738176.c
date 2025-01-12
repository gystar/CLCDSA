#include <stdio.h>
#include <math.h>
 
double P;
 
double function(double a);
 
int main() {
 
	scanf("%lf", &P);
 
	double low = 0;
	double high = P;
 
	double mid;
 
	while(1){
 
		if (high - low <0.0000000001) { break; }
 
		mid = (low + high) / 2.0;
 
		if (function(mid)*function(low) < 0) {
			high = mid;
		}
		else if (function(mid)*function(low) > 0) {
			low = mid;
		}
	}
	if(low + (P / pow(2.0, low / 1.5))>=P){
		printf("%.9lf\n",P);
	}
	else {
		printf("%.9lf\n", low + (P / pow(2.0, low / 1.5)));
	}
 
	return 0;
}
double function(double a) {
	return 1.0 - ((P*(log(2.0)) / 1.5)*(pow(exp(1.0), -a*((log(2.0)) / 1.5))));
} 