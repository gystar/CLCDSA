#include<stdio.h>

int main(){
	long long N,ans=0,tmp=0;
	scanf("%lld",&N);
	for(long long i=0;i<N;i++){
		long long a;
		scanf("%lld",&a);
		tmp+=a;
		if(a==0 || i==N-1){
			ans+=tmp/2;
			tmp=0;
		}
	}
	printf("%lld\n",ans);
	return 0;
} 