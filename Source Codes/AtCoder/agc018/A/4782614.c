#include <stdio.h>
#include <stdlib.h>
#define ll long long int
ll GCD(ll x,ll y){return y==0? x:GCD(y,x%y);}
ll max(ll x,ll y){return x<y?y:x;}
int main(void){
	int N,i;
	scanf("%d",&N);
	ll A,B,K,gcd,m;
	scanf("%lld",&K);
	scanf("%lld %lld",&A,&B);
	gcd = GCD(A,B);
	m = max(A,B);
	for(i=2;i<N;i++){
		scanf("%lld",&A);
		gcd = GCD(gcd,A);
		m = max(m,A);
	}
	if(K<=m && K%gcd==0)printf("POSSIBLE");
	else printf("IMPOSSIBLE");
	return 0;
} 