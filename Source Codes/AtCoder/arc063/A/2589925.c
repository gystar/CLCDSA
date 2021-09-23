#include <stdio.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define repp(i,l,r,k)for(ll i=(l);i<(r);i+=(k))
#define INF ((1LL<<62)-(1LL<<31))
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

char s[100010];
ll n;
ll ans;
int main(){
	scanf("%s",s);
	n=strlen(s);
	rep(i,0,n-1)if(s[i]!=s[i+1])ans++;
	printf("%lld\n",ans);
} 