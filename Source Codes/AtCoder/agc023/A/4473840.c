#include<stdio.h>
#include<stdlib.h>

int compare_int(const void *a, const void *b)
{
    long long  A=*(long long*)a - *(long long*)b;
    if(A>0)return 1;
    if(A==0)return 0;
    if(A<0)return -1;
}

int main(){
	int n,i;
	long long da[200000],d,co=1;
	long long ans=0,a[200001];
	a[0]=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%ld",&da[i]);a[0]=0;
	for(i=1;i<=n;i++)a[i]=a[i-1]+da[i-1];
	//for(i=0;i<n;i++)printf("%lld,",a[i]);puts("");
	qsort(a,n+1,sizeof(long long),compare_int);
	//for(i=0;i<n;i++)printf("%lld,",a[i]);
	for(i=1;i<=n;i++){
		if(a[i-1]!=a[i]){
			ans+=co*(co-1)/2;
			co=1;
		}else co++;
	}
	ans+=co*(co-1)/2;
	printf("%lld\n",ans);
	return 0;
} 