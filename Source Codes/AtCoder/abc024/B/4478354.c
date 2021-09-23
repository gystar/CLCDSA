#include <stdio.h>
int main(void){
	long long int n,t,a,a0,i,v=0;
	scanf("%lld%lld",&n,&t);
	for(i=0;i<n;i++){
		scanf("%lld",&a);
		if(i==0){
			a0=a;
			continue;
		}
		if(a-a0>t) v+=t;
		else v+=a-a0;
		if(i==n-1) v+=t;
		a0=a;
	}
	printf("%lld\n",v);
	return 0;
} 