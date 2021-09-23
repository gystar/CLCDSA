#include <stdio.h>

typedef long long ll;

int main(){

	ll N,K;

	scanf("%lld %lld",&N,&K);

	ll div=N*N*N;
	ll num=1ll;

	if(K+1ll<=N){
	num+=(N-K)*3ll;
	}
	if(1ll<=K-1ll){
	num+=(K-1ll)*3ll;
	}
	if(K+1ll<=N && 1ll<=K-1ll){
	num+=(K-1ll)*(N-K)*6ll;
	}

	double ans=(double)num/(double)div;

	printf("%.12f\n",ans);

	return 0;
} 