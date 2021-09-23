#include <stdio.h>
#include <stdlib.h>

typedef long long int ll;

int main(void){
	ll x, cnt;

	scanf("%lld", &x);

	cnt = 2*(x/11) + (x%11)/6 + (((x%11)-6*((x%11)/6))&&1);
	printf("%lld\n", cnt);
	

	return 0;
} 