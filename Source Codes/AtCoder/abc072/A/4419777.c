#include <stdio.h>
int main(void){
	long long int x,t;
	scanf("%lld%lld",&x,&t);
	if(x<t) printf("0\n");
	else printf("%lld\n",x-t);
	return 0;
} 