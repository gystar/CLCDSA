#include <stdio.h>
#define int long long

int max(int a, int b){
	return a >= b ? a : b;
}

signed main(){
	int aI, aO, aT, aJ, aL, aS, aZ, ans;
	scanf("%lld%lld%lld%lld%lld%lld%lld", &aI, &aO, &aT, &aJ, &aL, &aS, &aZ);
	ans = aO + (aI / 2) * 2 + (aJ / 2) * 2 + (aL / 2) * 2;
	if(aI > 0 && aJ > 0 && aL > 0){
		ans = max(ans, aO + 3 + ((aI - 1) / 2) * 2 + ((aJ - 1) / 2) * 2 + ((aL - 1) / 2) * 2);
	}
	printf("%lld\n", ans);
	return 0;
} 