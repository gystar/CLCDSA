#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <limits.h>
#define swap(type,a,b) do{type t=a;a=b;b=t;}while(0);
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))
#define ll long long
#define INF 100000000
#define MOD 1000000007
#define SIZE 200005
#define FOR(i,a,n) for(i=(a);i<(n);i++)
int comp(const void* a,const void* b){
	return *(int*)a-*(int*)b;
}
void fill(int a[],int b,int c){
	int i;
	FOR(i,0,b) a[i]=c;
	return;
}
ll inv[SIZE],f[SIZE],finv[SIZE];
void make_table(){
	int i;
	f[0]=f[1]=1; finv[0]=finv[1]=1;
	inv[1]=1;
	FOR(i,2,SIZE+1){
		inv[i]=MOD-(MOD/i)*inv[MOD%i]%MOD;
		f[i]=(f[i-1]*(ll)i)%MOD;
		finv[i]=(finv[i-1]*inv[i])%MOD;
	}
	return;
}
ll comb(int n,int k){
	if(n<0||k<0||n<k) return 0;
	return (((f[n]*finv[k])%MOD)*finv[n-k])%MOD;
}
int main(void)
{
	int h,w,a,b,i;
	ll ans=0;
	make_table();
	scanf("%d%d%d%d",&h,&w,&a,&b);
	FOR(i,b,w){
		ans+=(comb(i+h-a-1,i)*comb(w-i+a-2,a-1))%MOD;
		ans%=MOD;
	}
	printf("%lld\n",ans);
	return 0;
} 