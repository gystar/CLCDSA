#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

char s[55],t[55];
int main(){
	scanf("%s%s",s,t);
	ll n=strlen(s);
	rep(i,0,n){
		putchar(s[i]);
		if(t[i])putchar(t[i]);
	}
} 