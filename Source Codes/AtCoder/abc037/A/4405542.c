#include <stdio.h>
int main(void){
	long long int a,b,c,i=0;
	scanf("%lld%lld%lld",&a,&b,&c);
	if(a<=b){
		while(a<=c){
			i++;
			c-=a;
		}
	}
	else{
		while(b<=c){
			i++;
			c-=b;
		}
	}
	printf("%lld\n",i);
	return 0;
} 