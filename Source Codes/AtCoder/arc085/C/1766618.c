#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FOR(i,a,n) for(i=a;i<n;i++)
#define swap(type,a,b) do{type t=a;a=b;b=t;}while(0);
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))
#define INF 1000000000000000
#define MAX_V 200
#define MAX_E 10000
#define ll long long
typedef struct LIST{
	int to;
	ll cap;
	struct LIST *rev; //???????
	struct LIST *next;
}Edge;

Edge *iter[MAX_V];
Edge new_edge[MAX_E];
Edge new_rev_edge[MAX_E];
int level[MAX_V];
int que[MAX_V];
int edge_size=0;

void add_edge(Edge **graph,int s,int t,ll c){
	new_edge[edge_size].to = t;      new_edge[edge_size].cap = c;
	new_rev_edge[edge_size].to = s;  new_rev_edge[edge_size].cap = 0;
	
	new_edge[edge_size].rev = &new_rev_edge[edge_size];
	new_rev_edge[edge_size].rev = &new_edge[edge_size];
	
	new_edge[edge_size].next = graph[s];      graph[s] = &new_edge[edge_size];
	new_rev_edge[edge_size].next = graph[t];  graph[t] = &new_rev_edge[edge_size];
	
	edge_size++;
	return;
}

void bfs(Edge **graph,int s){
	int front=0,rear=0,v;
	Edge *e;
	
	memset(level,-1,sizeof(level));
	level[s]=0;
	que[rear++]=s;
	
	while(front!=rear){
		v=que[front++];
		for(e=graph[v];e!=NULL;e=e->next){
			if(e->cap>0&&level[e->to]<0){
				level[e->to]=level[v]+1;
				que[rear++]=e->to;
			}
		}
	}
	return;
}

ll dfs(int v,int t,ll f){
	ll d; Edge *e;
	
	if(v==t) return f;
	
	for(;iter[v]!=NULL;iter[v]=iter[v]->next){
		e=iter[v];
		if(e->cap>0&&level[v]<level[e->to]){
			d=dfs(e->to,t,MIN(f,e->cap));
			if(d>0){
				e->cap-=d;
				e->rev->cap+=d;
				return d;
			}
		}
	}
	return 0;
}
ll max_flow(Edge **graph,int s,int t){
	ll flow=0,f;
	
	while(1){
		bfs(graph,s);
		if(level[t]<0) return flow;
		memcpy(iter,graph,sizeof(iter));
		while((f=dfs(s,t,INF))>0) flow+=f;
	}
}
Edge *g[MAX_V];
int a[101];
int main(void)
{
	int n,s,t,i,j;
	ll res=0;
	scanf("%d",&n);
	s=0,t=n+1;
	FOR(i,1,n+1){
	    scanf("%d",a+i);
	    if(a[i]>0){
	        add_edge(g,i,t,a[i]);
	        res+=a[i];
	    }else{
	        add_edge(g,s,i,-a[i]);
	    }
	    for(j=2*i;j<=n;j+=i) add_edge(g,i,j,INF);
	}
	printf("%lld\n",res-max_flow(g,s,t));
	return 0;
} 