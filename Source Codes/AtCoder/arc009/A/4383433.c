#include<stdio.h>

int main(){
		int n,i,ans=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
				int ab[2];
				scanf("%d%d",&ab[0],&ab[1]);
				ans+=ab[0]*ab[1];
		}
		printf("%d\n",ans+ans/20);
		return 0;
} 