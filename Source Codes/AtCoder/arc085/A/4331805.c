#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int ans=1900*m+100*(n-m);
	ans*=pow(2,m);
	printf("%d\n",ans);
	return 0;
} 