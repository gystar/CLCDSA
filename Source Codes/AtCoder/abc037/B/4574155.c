#include <stdio.h>
int main(void){
	long long int n,q,l,r,t,i,j,a[100]={0};
	scanf("%lld%lld",&n,&q);
	for(i=0;i<q;i++){
		scanf("%lld%lld%lld",&l,&r,&t);
		for(j=l-1;j<r;j++){
			a[j]=t;
		}
	}
	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
	return 0;
} 