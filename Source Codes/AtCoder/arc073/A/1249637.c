#include<stdio.h>

int main(int argc, char const *argv[]){
	long long n,t,now,ans=0,i,ti;
	scanf("%lld %lld",&n,&t);
	scanf("%lld",&now);
	ans+=t;
	for(i=1;i<n;i++){
		scanf("%lld",&ti);
		if(ti-now>=t) ans+=t;
		else ans+=ti-now;
		now=ti;
	}
	printf("%lld\n",ans);
	return 0;
} 