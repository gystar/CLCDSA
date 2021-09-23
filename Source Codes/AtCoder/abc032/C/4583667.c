#include <stdio.h>
#define ll long long int
int main(void){
	int n,ans=0;
	ll k,l,r,P=1;
	scanf("%d %lld",&n,&k);
	ll s[n],i;
	for(i=0;i<n;i++){
		scanf("%lld",&s[i]);
		if(s[i] == 0){
			printf("%d\n",n);
			return 0;
		}
	}
	l = 0;
	r = 0;
	while(l<n){
		while(P*s[r] <= k && r<n){
			P *= s[r];
			r++;
		}
		if(l<r){
			if(P<=k && ans <(r-l))  ans = r-l;
			P /= s[l];
			l++;
		}else{
			l++;
			r++;
		}
	}
	
	
	printf("%d\n",ans);
	return 0;
} 