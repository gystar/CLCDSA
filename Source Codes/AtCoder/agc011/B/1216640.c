#include <stdio.h>
#include <stdlib.h>
#define ll long long
#define FOR(i,a,n) for(i=a;i<n;i++)
int comp(const void* a,const void* b){
	return *(int*)a-*(int*)b;
}
int a[100000];
int main(void)
{
	int n,i,k=0;
	ll sum=0;
	scanf("%d",&n);
	FOR(i,0,n) scanf("%d",a+i);
	qsort(a,n,sizeof(int),comp);
	FOR(i,0,n){
		if(sum*2<a[i]) k=i;
		sum+=a[i];
	}
	printf("%d\n",n-k);
	return 0;
} 