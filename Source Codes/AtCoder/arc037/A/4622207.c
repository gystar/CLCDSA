#include<stdio.h>

int main(){
	int n,a,i,ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		ans+=(80>a?80-a:0);
	}
	printf("%d\n",ans);
} 