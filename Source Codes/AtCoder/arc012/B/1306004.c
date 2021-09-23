#include <stdio.h>
int main(void)
{
	int n;
	double a,b,l,t;
	scanf("%d%lf%lf%lf",&n,&a,&b,&l);
	while(n-->0){
		t=l/a;
		l=b*t;
	}
	printf("%.10lf\n",l);
	return 0;
} 