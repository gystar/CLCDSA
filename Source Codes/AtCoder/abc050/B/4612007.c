#include <stdio.h>
int main(void){
	long long int n,t[100],m,p,x,i,j,v=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&t[i]);
		v+=t[i];
	}
	scanf("%lld",&m);
	for(i=0;i<m;i++){
		scanf("%lld%lld",&p,&x);
		printf("%lld\n",v+x-t[p-1]);
	}
	return 0;
} 