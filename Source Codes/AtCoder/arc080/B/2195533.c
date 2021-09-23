#include<stdio.h>
#include<stdlib.h>
#define ll long long

#define rep(i,l,r)for(ll i=(l);i<(r);i++)

ll d[110][110];
int main(){
	int h,w,n;
	scanf("%d%d%d",&h,&w,&n);
	ll s=0;
	rep(i,1,n+1){
		int t;
		scanf("%d",&t);
		while(t--){
			d[s/w][s%w]=i;
			s++;
		}
	}
	rep(i,0,h)rep(j,0,w){
		if(i%2==0)printf("%d%c",d[i][j],j==w-1?'\n':' ');
		else printf("%d%c",d[i][w-1-j],j==w-1?'\n':' ');
	}
	return 0;
} 