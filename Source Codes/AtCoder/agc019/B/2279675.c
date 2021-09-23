#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define sum(n)((n)*((n)+1)/2)

char s[200010];
ll a[300];
int main(){
	scanf("%s",s);
	ll n=strlen(s);
	//#{(l,r)|l<=r}-#{(l,r)|l<=r s[l]==s[r]}+1
	
	ll ans=sum(n)+1;
	rep(i,0,n)a[s[i]]++;
	rep(i,0,300)ans-=sum(a[i]);
	
	printf("%lld\n",ans);
	return 0;
} 