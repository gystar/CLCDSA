#include<stdio.h>

int main(){
		long long k,tmp=0,ans[100001]={0};
		int n;scanf("%d%lld",&n,&k);
		int a,b,i;
		for(i=0;i<n;i++){
				scanf("%d%d",&a,&b);
				ans[a]+=b;
		}
		for(i=1;i<100001;i++){
				tmp+=ans[i];
				if(tmp>=k){
						printf("%d\n",i);
						return 0;
				}
		}
} 