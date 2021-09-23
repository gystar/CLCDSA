#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

char s[110][110];
int main(){
	ll h,w;
	scanf("%lld%lld",&h,&w);
	rep(i,0,h)scanf("%s",s[i]);
	
	rep(i,0,w+2)putchar('#');puts("");
	rep(i,0,h){
		putchar('#');
		printf("%s",s[i]);
		putchar('#');
		puts("");
	}
	rep(i,0,w+2)putchar('#');puts("");
} 