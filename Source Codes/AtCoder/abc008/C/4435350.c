#include<stdio.h>

int main(){
	int n,i,j,r,num[100]={0};
	long long c[100];
	double ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%lld",&c[i]);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(c[i]%c[j]==0)num[i]++;
		}
	}
	for(i=0;i<n;i++){
		ans+=(num[i]%2==0?1/(double)2:(num[i]+1)/(double)(num[i]*2));
	}
	printf("%.9f\n",ans);
	return 0;
} 