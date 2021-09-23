#include<stdio.h>
int main(){
	int n,m,a,b,i,j,k,d[20][20]={};
	long long c[100010]={1};
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		d[a-1][b-1]=1;
	}
	for(i=0;i<(1<<n);i++){
		for(j=0;j<n;j++){
			if(i&(1<<j))continue;
				for(k=0;k<n;k++){
				if(d[k][j]==0)continue;
				if((i&(1<<k))==0)break;
			}
			if(k==n)c[i+(1<<j)]+=c[i];
		}
	}
	printf("%lld\n",c[(1<<n)-1]);
	return 0;
} 