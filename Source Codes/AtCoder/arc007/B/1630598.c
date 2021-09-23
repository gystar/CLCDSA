#include <stdio.h>

int main(void)
{
	int n,m,i,temp,j,k;
	int disk[100]={0},ans[101]={0};
	scanf("%d %d",&n,&m);
	
	for(i=0;i<m;i++){
		scanf("%d",&disk[i]);
	}
	
	for(i=0;i<=n;i++){
		ans[i]=i;
	}
	
	for(i=0;i<m;i++){
		temp=ans[0];
		for(j=0;j<=n;j++){
			if(ans[j]==disk[i]){
				k=j;
				break;
			}
		}
		ans[0]=disk[i];
		ans[j]=temp;
	}
	
	for(i=1;i<=n;i++){
		printf("%d\n",ans[i]);
	}
	
	return 0;
} 