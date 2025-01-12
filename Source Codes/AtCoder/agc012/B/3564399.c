#include <stdio.h>
#include <stdlib.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)

typedef struct edge{ll s,g;}E;
int edgehikaku(const void*a,const void*b){
	E*p=(E*)a,*q=(E*)b;
	if((*p).s<(*q).s)return -1;
	if((*p).s>(*q).s)return  1;
	if((*p).g<(*q).g)return -1;
	return 1;
}

ll n,m;
E e[200010];
int id[100010];
void readgraph(){
	scanf("%lld%lld",&n,&m);
	rep(i,0,m){
		ll x,y;
		scanf("%lld %lld",&x,&y);
		x--,y--;
		e[2*i].s=x;
		e[2*i].g=y;
		e[2*i+1].s=y;
		e[2*i+1].g=x;
	}
	m*=2;
	qsort(e,m,sizeof(E),edgehikaku);

	int p=0;
	rep(i,1,n){
		while(p<m&&e[p].s<i)p++;
		id[i]=p;
	}
	id[n]=m;
}


ll v[100010];
ll d[100010];
ll c[100010];
ll dp[100010][2];
//dp[v][*]��v???dp[v][0]????v????dp[v][1]?????????????

void dfs(ll vv,ll dd,ll cc){
	if(!dp[vv][0])dp[vv][0]=cc;
	if(dp[vv][1]>=dd)return;
	dp[vv][1]=dd;
	rep(i,id[vv],id[vv+1])dfs(e[i].g,dd-1,cc);
}

int main(){
	readgraph();
	int q;
	scanf("%d",&q);
	rep(i,0,q){
		scanf("%lld%lld%lld",v+i,d+i,c+i);
		v[i]--;
	}
	for(int i=q-1;i>=0;i--)dfs(v[i],d[i],c[i]);
	rep(i,0,n)printf("%lld\n",dp[i][0]);
	
} 