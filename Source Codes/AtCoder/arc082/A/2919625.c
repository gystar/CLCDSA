#include<stdio.h>
#include<math.h>
int main()
{
	int a[100050]={0};	
	int b[100050]={0};
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
  int t=0;
	for(int i=0;i<n;i++)
	{   b[a[i]]++;
	}
	for(int j=0;j<n;j++)
	{
		b[a[j]-1]++;
		b[a[j]+1]++;
	}
	int max=b[a[0]];
	for(int i=0;i<n;i++)
	{
		if(b[a[i]]>max)
		max=b[a[i]];
	}
	printf("%d\n",max);
  return 0;
} 