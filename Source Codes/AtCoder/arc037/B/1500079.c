#include <stdio.h>
#include <stdlib.h>
#define FOR(i,a,n) for(i=a;i<n;i++)
int *v,*e;
int *par;
int *rank;

void init_union(int size){
	int i;
	par = (int*)calloc(size,sizeof(int));
	rank = (int*)calloc(size,sizeof(int));
	v = (int*)calloc(size,sizeof(int));
	e = (int*)calloc(size,sizeof(int));
	FOR(i,0,size) par[i]=i,v[i]=1;
	return;
}

int root(int a){
 	if(par[a]==a) return a;
 	else{
 		par[a]=root(par[a]);
 		return par[a];
 	}
}
 
int is_same(int a,int b){
 	return root(a)==root(b);
}
 
void unite(int a,int b){
	a=root(a);
	b=root(b);
	if(a==b){
		e[a]++;
		return;
	}
	if(rank[a]>rank[b]){
		par[b]=a;
		v[a]++,e[a]++;
	}
	else{
		par[a]=b;
		v[b]++,e[b]++;
		if(rank[a]==rank[b]) rank[b]++;
	}
	return;
}
int used[100];
int main(void)
{
	int n,m,a,b,res=0,k,i;
	scanf("%d%d",&n,&m);
	init_union(n);
	FOR(i,0,m){
		scanf("%d%d",&a,&b);
		unite(--a,--b);
	}
	FOR(i,0,n){
		k=root(i);
		if(!used[k]){
			used[k]=1;
			if(e[k]==v[k]-1) res++;
		}
	}
	printf("%d\n",res);
	return 0;
} 