#include<stdio.h>

int main(){
		int m,n,nl,ans=0,nok=0;
		scanf("%d%d%d",&m,&n,&nl);
		while(nl>0){
				ans+=nl;
				nok+=nl;
				nl=0;
				nl+=nok/m*n;
				nok=nok%m;
		}
		printf("%d\n",ans);
		return 0;
} 