#include <stdio.h>
int main(void){
	long long int l,h,n,a,v,i;
	scanf("%lld%lld%lld",&l,&h,&n);
	for(i=0;i<n;i++){
		scanf("%lld",&a);
		if(a<l) a=l-a;
		else if(a>h) a=-1;
		else a=0;
		printf("%lld\n",a);
	}
	return 0;
} 