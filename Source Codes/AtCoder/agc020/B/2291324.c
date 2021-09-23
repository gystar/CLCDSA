#include <stdio.h>
#define N 100005
typedef long long ll;
int n;ll a[N];
int main() {
	ll l=2,r=2;
	scanf("%d",&n);
	for(int i=0;i<n;++i) scanf("%lld",a+i);
	for(int i=n-1;~i;--i) {
		l=a[i]*((l+a[i]-1)/a[i]);
		r=a[i]*(r/a[i]+1)-1;
		if(l>r) {
			puts("-1");return 0;
		}
	}
	printf("%lld %lld\n",l,r);
	return 0;
} 