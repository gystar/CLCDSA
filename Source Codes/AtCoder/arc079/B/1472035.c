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
int comp(const void* a,const void* b){
	return *(int*)a-*(int*)b;
}
void fill(int a[],int b,int c){
	int i;
	FOR(i,0,b) a[i]=c;
	return;
}
int main(void)
{
	int i;
	ll k,a,b;
	scanf("%lld",&k);
	a=k/50,b=k%50;
	puts("50");
	FOR(i,0,50){
		if(i<b) printf("%lld",i+a-b+51);
		else printf("%lld",i+a-b);
		printf("%c",i==49?'\n':' ');
	}
	return 0;
} 