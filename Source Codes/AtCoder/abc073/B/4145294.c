#include<stdio.h> 
int main()
{
	int n,a,b,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&a,&b);
		ans+=(b-a)+1;
	}
	printf("%d",ans);
	return 0;
} 