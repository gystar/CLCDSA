#include <stdio.h>
int main(void){
	long long int w,h;
	scanf("%lld%lld",&w,&h);
	if(w*3==h*4) printf("4:3\n");
	else printf("16:9\n");
	return 0;
} 