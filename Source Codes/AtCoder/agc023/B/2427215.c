#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)

char s[300][300];
ll ans;
int main(){
	int n;
	scanf("%d",&n);
	rep(i,0,n)scanf("%s",s[i]);
	rep(a,0,n){
		int flag=1;
		rep(i,0,n)rep(j,0,n)if(s[(a+i)%n][+j]!=s[(a+j)%n][i])flag=0;
		if(flag)ans+=n;
	}
	printf("%lld\n",ans);
	return 0;
} 