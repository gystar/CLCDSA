#include <stdio.h>
int main(void){
	int n,i,a,x[21];
	long long int v=0,xm;
	scanf("%d%d",&n,&xm);
	for(i=0;i<n;i++){
		x[i]=xm%2;
		xm/=2;
	}
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(x[i]==1) v+=a;
	}
	printf("%lld\n",v);
	return 0;
} 