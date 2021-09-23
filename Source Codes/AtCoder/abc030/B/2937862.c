#include <stdio.h>


int main(){
	
	double a,b,n,m,s;
	
	scanf("%lf %lf",&a,&b);
	
	if(a >= 12) a = a - 12;
	
	n = a * 30 + b / 2.0;
	m = b * 6;
	
	if(n>=m) s = n - m;
	else s = m - n;
	
	if(360 - s >= s)printf("%f\n",s);
	else printf("%f\n",360-s);
	
	
	return 0;
} 