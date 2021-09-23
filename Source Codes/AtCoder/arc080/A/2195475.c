#include<stdio.h>
#include<stdlib.h>
#define ll long long

#define rep(i,l,r)for(ll i=(l);i<(r);i++)

ll a[3];
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		ll t;
		scanf("%lld",&t);
		if(t%2)a[0]++;
		else if(t%4)a[1]++;
		else a[2]++;
	}
	if(a[1])a[0]++;
	puts(a[2]+1<a[0]?"No":"Yes");
	return 0;
} 