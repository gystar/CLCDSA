#include <stdio.h>
#define ll long long int

int main(){
	ll R, B, x, y, high, low, K;
	scanf("%lld %lld %lld %lld",&R,&B,&x,&y);

	low = 0;
	high = (R > B) ? R : B;
	while(high - low > 1) {
		K = (high + low) / 2;
		if(R>=K&&B>=K&& ((R-K)/(x-1) + (B-K)/(y-1) >= K) ) low = K;
		else high = K;
	}

	printf("%lld\n", low);
	return 0;
} 