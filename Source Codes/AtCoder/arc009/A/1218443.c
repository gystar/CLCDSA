#include <stdio.h>

int main(void)
{
	int n,i,sum=0,ans;
	int a[10],b[10];
	double sum2;
	scanf("%d\n",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	
	for(i=0;i<=n-1;i++){
		sum+=a[i]*b[i];
	}
	
	sum2=(double)sum;
	
	ans=(int)(sum2*1.05);
	printf("%d\n",ans);
	return 0;
} 