#include<stdio.h>

int main(){
	int n,k,ans=1,i;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		if(ans<k){
			ans=ans*2;
		}else ans+=k;
	}
	printf("%d\n",ans);
	return 0;
} 