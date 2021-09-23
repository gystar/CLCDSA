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

int main(){
	scanf("%s",s);
	n=strlen(s);
	ll pcnt=0;
	rep(i,0,n)pcnt+=(s[i]=='p');
	//??????-pcnt??????n/2
	printf("%lld\n",n/2-pcnt);
} 