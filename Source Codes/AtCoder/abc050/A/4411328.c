#include <stdio.h>
int main(void){
	long long int a,b;
	char op[2];
	scanf("%lld %s %lld",&a,op,&b);
	if(op[0]=='+') printf("%lld\n",a+b);
	else printf("%lld\n",a-b);
	return 0;
} 