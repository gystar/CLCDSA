#include<stdio.h>
int main(void)
{
	int n,q,a,b,x[200001],s[200001],sum,i;
	scanf("%d%d",&n,&q);
	for(i=1;i<=n;i++) x[i]=0;
	for(i=0;i<q;i++){
		scanf("%d%d",&a,&b);
		x[a]++; x[b+1]--;
	}
	sum=0;
	for(i=1;i<=n;i++){
		sum+=x[i];
		if(sum%2==1) s[i]=1;
		else s[i]=0;
	}
	for(i=1;i<=n;i++) printf("%d",s[i]);
	printf("\n");
	return 0;
} 