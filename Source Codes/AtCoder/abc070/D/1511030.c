#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#define swap(type,a,b) do{type t=a;a=b;b=t;}while(0);
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))
#define ll long long
#define INF (1e+18)
#define FOR(i,a,n) for(i=(a);i<(n);i++)
int comp(const void* a,const void* b){
	return *(int*)a-*(int*)b;
}
void fill(int a[],int b,int c){
	int i;
	FOR(i,0,b) a[i]=c;
	return;
}
typedef struct{
	int front;
	int rear;
	int size;
	int *data;
} Queue;
void init_queue(Queue* q,int s){
	q->data=calloc(s,sizeof(int));
	q->front=q->rear=0;
	q->size=s;
	return;
}
void end(Queue* q){
	free(q->data);
	return;
}
void push(Queue* q,int a){
	q->data[q->rear]=a;
	q->rear=(q->rear+1)%q->size;
	return;
}
int pop(Queue* q){
	int res=q->data[q->front];
	q->front=(q->front+1)%q->size;
	return res;
}
int isempty(Queue *q){
	return q->front==q->rear;
}
typedef struct LIST{
	int to,cost;
	struct LIST *next;
}Edge;
Edge** init(int v){
	Edge **edge=(Edge**)calloc(v,sizeof(Edge*));
	return edge;
}
void add_edge(Edge **edge,int s,int t,int c){
	Edge *tmp=(Edge*)malloc(sizeof(Edge));
	tmp->to=t,tmp->cost=c;
	tmp->next=edge[s];
	edge[s]=tmp;
	return;
}
void delete_edge(Edge **edge,int v){
	int i;
	Edge *e,*tmp;
	FOR(i,0,v){
		e=edge[i];
		while(e!=NULL){
			tmp=e->next;
			free(e);
			e=tmp;
		}
	}
	return;
}
ll d[100000];
Queue que;
Edge **edge;
int main(void)
{
	int n,a,b,c,q,k,i;
	scanf("%d",&n);
	edge=init(n);
	init_queue(&que,n);
	FOR(i,0,n-1){
		scanf("%d%d%d",&a,&b,&c);
		a--,b--;
		add_edge(edge,a,b,c);
		add_edge(edge,b,a,c);
	}
	FOR(i,0,n) d[i]=INF;
	scanf("%d%d",&q,&k);
	d[--k]=0LL;
	push(&que,k);
	while(!isempty(&que)){
		int p=pop(&que);
		for(Edge *e=edge[p];e!=NULL;e=e->next){
			if(d[e->to]==INF){
				d[e->to]=d[p]+e->cost;
				push(&que,e->to);
			}
		}
	}
	FOR(i,0,q){
		scanf("%d%d",&a,&b);
		printf("%lld\n",d[--a]+d[--b]);
	}
	return 0;
} 