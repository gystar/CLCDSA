#include <stdio.h>
int main(void){
	long long int n,k,i,v=1;
	scanf("%lld%lld",&n,&k);
	for(i=0;i<n;i++){
		if(i==0) v*=k;
		else v*=(k-1);
	}
	printf("%lld\n",v);
	return 0;
} 