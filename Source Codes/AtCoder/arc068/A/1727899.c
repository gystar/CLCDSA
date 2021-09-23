#include <stdio.h>

int main(){
	long long x, ans;
	scanf("%lld", &x);
	ans = (x / 11) * 2;
	if(x % 11 == 0){
		ans--;
	}
	else if(x % 11 > 6){
		ans++;
	}
	printf("%lld\n", ans + 1);
	return 0;
} 