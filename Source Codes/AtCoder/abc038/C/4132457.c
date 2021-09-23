#include<stdio.h>

int main(){
		int n,i,a[100001];
		long long ans=0,c=1;
		scanf("%d",&n);
		for(i=0;i<n;i++)scanf("%d",&a[i]);
		a[n]=-1;
		for(i=1;i<=n;i++){
				if(a[i]>a[i-1])c++;
				else{
						ans+=(c*c+c)/2;
						c=1;
				}
		}
		printf("%lld",ans);
		return 0;
} 