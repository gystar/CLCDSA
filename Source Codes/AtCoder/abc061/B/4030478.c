#include<stdio.h>

int main(){
		int n,m,i,j,ab[50][2],ans[51]={0};
		scanf("%d%d",&n,&m);
		for(i=0;i<m;i++)scanf("%d%d",&ab[i][0],&ab[i][1]);
		for(j=1;j<=n;j++){
				for(i=0;i<m;i++){
						if(ab[i][0]==j||ab[i][1]==j)ans[j]++;
				}
		}
		for(i=1;i<=n;i++)printf("%d\n",ans[i]);
		return 0;
} 