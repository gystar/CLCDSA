#include<stdio.h>

int main(){
		int n,a[20],i;long x;
		scanf("%d%ld",&n,&x);
		for(i=0;i<n;i++)scanf("%d",&a[i]);
		int ans=0;
		for(i=0;i<n;i++){
				if(x&1<<i){
						ans+=a[i];
				}
		}
		printf("%d\n",ans);
		return 0;
} 