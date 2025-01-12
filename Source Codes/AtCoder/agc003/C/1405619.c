#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#define swap(type,a,b) do{type t=a;a=b;b=t;}while(0);
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))
#define ll long long
#define INF 100000000
#define FOR(i,a,n) for(i=(a);i<(n);i++)
void fill(int a[],int b,int c){
	int i;
	FOR(i,0,b) a[i]=c;
	return;
}
typedef struct{
	int data,num;
}Data;
int comp(const void* a,const void* b){
	return ((Data*)a)->data - ((Data*)b)->data;
}
Data a[100000];
int main(void)
{
	int n,res=0,i;
	scanf("%d",&n);
	FOR(i,0,n){
		scanf("%d",&a[i].data);
		a[i].num=i;
	}
	qsort(a,n,sizeof(Data),comp);
	for(i=0;i<n;i+=2){
		if(a[i].num%2) res++;
	}
	printf("%d\n",res);
	return 0;
} 