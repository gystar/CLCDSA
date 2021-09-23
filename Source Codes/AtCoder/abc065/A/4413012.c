#include <stdio.h>
int main(void){
	long long int x,a,b;
	scanf("%lld%lld%lld",&x,&a,&b);
	if(x>=b-a && b<=a) printf("delicious\n");
	else if(x>=b-a && b>a) printf("safe\n");
	else printf("dangerous\n");
	return 0;
} 