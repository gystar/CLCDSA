#include<stdio.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))

int d[40][100010];
int main(){
	int n;
	scanf("%d%*d",&n);
	rep(nnn,0,n){
		int s,t,c;
		scanf("%d%d%d",&s,&t,&c);
		d[c][s-1]++;
		d[c][t]--;
	}
	rep(c,1,31)rep(i,0,100005){
		if(i)d[c][i]+=d[c][i-1];
		if(d[c][i]>0)d[35][i]++;
	}
	int ans=0;
	rep(i,0,100005)ans=max(ans,d[35][i]);
	printf("%d\n",ans);
	return 0;
} 