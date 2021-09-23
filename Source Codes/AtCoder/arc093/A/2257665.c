#include<stdio.h>

int cost(int x,int y){
	if(x>=y){
		return (x-y);
	}else{
		return (y-x);
	}
}

int main(void){
	int n,a[100001],i,sum=0,ans;
	scanf("%d",&n);
	a[0]=0;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	a[n+1]=0;
	for(i=1;i<=n+1;i++){
		if(a[i]>=a[i-1]){
			sum=sum+(a[i]-a[i-1]);
		}else{
			sum=sum+(a[i-1]-a[i]);
		}
	}
	for(i=1;i<=n;i++){
		ans=sum+cost(a[i+1],a[i-1])-cost(a[i+1],a[i])-cost(a[i],a[i-1]);
		printf("%d\n",ans);
	}
	return 0;
} 