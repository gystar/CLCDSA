#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)

char s[100010];
int main(){
	scanf("%s",s);
	ll n=strlen(s);
	ll ans=0;
	rep(i,0,n){
		if(s[i]=='U')ans+=i;
		else ans+=n-1-i;
	}
	printf("%lld\n",ans+n*(n-1));
	return 0;
} 