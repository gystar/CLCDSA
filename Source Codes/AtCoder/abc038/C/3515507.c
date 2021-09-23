#include <stdio.h>
#define ll long long int
int main(void){
	ll n,l=0,r=0,ans=0,i,a[100005];
	scanf("%lld",&n);
	for(i=0;i<n;i++)scanf("%lld",&a[i]);
	a[n]=a[n+1]=-1;
	while(l<n){
		while(a[r]<a[r+1]||l>r)	r++;
		ans+=r-l+1;
		l++;
	}
	printf("%lld",ans);
	return 0;
} 