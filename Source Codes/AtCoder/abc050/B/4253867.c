#include<stdio.h>
int main()
{
	int n;
	int i;
	scanf("%d",&n);
	int a[101];
	int sum = 0;
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum += a[i];
	}
	int m,j;
	int x;
	int y,number;
	scanf("%d",&m);
	int t;
	for(j = 0;j<m;j++)
	{
		t = sum;
		scanf("%d%d",&x,&y);
		t -= a[x-1];
		t += y;
		printf("%d\n",t);
	}
	return 0 ;
} 