#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}
int main()
{
	int n,c,k,t[100005],i,sum=0,ans=0;
	long long int x=0;
	scanf("%d%d%d",&n,&c,&k);
	for(i=0;i<n;i++)
	scanf("%d",&t[i]);
	qsort(t,n,sizeof(t[0]),cmp);
	x=t[0]+k;
	ans++;
	for(i=0;i<n;i++)
	{
		if(x>=t[i]&&sum<c)sum++;
		else{
			ans++;
			x=t[i]+k;
			sum=1;
		}
	}
	printf("%d\n",ans);
	return 0;
} 