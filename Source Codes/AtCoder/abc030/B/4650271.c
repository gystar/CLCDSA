#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n,m;
	double ans,a,b;
	scanf("%d%d",&n,&m);
	b = 6*m;
	a = 30*(n%12) + 0.5*m;
	ans = a-b>0?a-b:b-a;
	ans = ans<180?ans:360-ans;
	printf("%lf\n",ans);
	return 0;
} 