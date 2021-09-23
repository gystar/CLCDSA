#include <stdio.h>
#define int long long

signed main(){
	int N, X, Y, tmp, ans;
	scanf("%lld%lld", &N, &X);
	for(ans = N, Y = N - X;;){
		if(X > Y){
			tmp = X;
			X = Y;
			Y = tmp;
		}
		if(Y % X == 0){
			ans += X * (2 * (Y / X) - 1);
			break;
		}
		else{
			ans += X * 2 * (Y / X);
			Y = Y % X;
		}
	}
	printf("%lld\n", ans);
	return 0;
} 