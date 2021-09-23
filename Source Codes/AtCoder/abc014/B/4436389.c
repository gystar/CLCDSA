#include <stdio.h>
int main(void){
	int n,i,a,x[21];
	long long int v=0,xm;
	scanf("%d%d",&n,&xm);
	for(i=0;i<n;i++){
		x[i]=xm%2;
		scanf("%d",&a);
		if(x[i]==1) v+=a;
		xm/=2;
	}
	printf("%lld\n",v);
	return 0;
} 