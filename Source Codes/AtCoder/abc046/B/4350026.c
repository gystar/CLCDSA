#include <stdio.h>
int main()
{
	int n,k;
	unsigned long long ans=1;
	scanf("%d%d", &n, &k);
	n--;
	ans*=k;
	k--;
	while(n>0){
		ans*=k;
		n--;
	}
	printf("%lld\n", ans);
	return 0;
} 