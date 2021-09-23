#include <stdio.h>
int main(void){
	long long int n,s,t,w,a[1000]={0},best=0,i;
	scanf("%lld%lld%lld",&n,&s,&t);
	scanf("%lld",&w);
	if(w>=s && w<=t) best++;
	for(i=2;i<=n;i++){
		scanf("%lld",&a[i]);
		if(w+a[i]>=s && w+a[i]<=t) best++;
		w+=a[i];
	}
	printf("%lld\n",best);
	return 0;
} 