#include<stdio.h>

int main(){
		int n,i,j,k,f[100][10];
		long p[100][11];
		long long ans=-2000000000000;
		scanf("%d",&n);
		for(i=0;i<n;i++){
				for(j=0;j<10;j++){
						scanf("%d",&f[i][j]);
				}
		}
		for(i=0;i<n;i++){
				for(j=0;j<11;j++){
						scanf("%lld",&p[i][j]);
				}
		}
		for(i=1;i<1024;i++){
				int joisino[10];
				int a=i,doko[100]={0};
				long long tmp=0;
				j=0;
				while(a>0){
						joisino[j]=a%2;
						if(a%2==1)a--;
						a=a/2;
						j++;
				}
				for(j=0;j<n;j++){
						for(k=0;k<10;k++){
								if(joisino[k]==1&&f[j][k]==1)doko[j]++;
						}
				}
				for(j=0;j<n;j++)tmp+=p[j][doko[j]];
				if(tmp>ans)ans=tmp;
		}
		printf("%lld\n",ans);
		return 0;
} 