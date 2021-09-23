#include <stdio.h>

int main(void) {
	double t=0.0,a,b,c,d,e;
	int i,n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++) {
		scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
		if((a+b+c+d+e*110/900)>=t) {
			t=a+b+c+d+e*110/900;
		}
	}
	printf("%f\n",t);
	return 0;
} 