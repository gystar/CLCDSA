#include<stdio.h>
#define MOD 1000000009+7
#define MAX 9223372036854775807

int main(){
	long long n,h,a,b,c,d,e;
	long long i,ans=MAX,req;
	scanf("%lld %lld",&n,&h);
	scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
	b+=e;
	d+=e;
	req=e*n-h+1;
	for(i=0;i<=n;i++){
		long long r=req-b*i;
		long long tmp;
		if(r<=0){
			tmp=a*i;
		}else{
			tmp=c*((r+d-1)/d)+a*i;
		}
		if(tmp<ans)ans=tmp;
	}
	printf("%lld\n",ans);	
	return 0;
} 