#include <stdio.h>
#define ll long long int
int main(void){
	ll n,i;
	scanf("%lld",&n);
	for(i=1;i<n;i++){
		if(i*i*i*i==n)break;
	}
	printf("%lld",i);
	return 0;
} 