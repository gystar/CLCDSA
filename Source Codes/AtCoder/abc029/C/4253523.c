#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[10]={};
	int i,j;
	for(i=0;i<pow(3,n);i++)
	{
		for(j=n-1;j>=0;j--)
		{
			if(a[j]==0)
				printf("a");
			if(a[j]==1)
				printf("b");
			if(a[j]==2)
				printf("c");
		}
		printf("\n");
		a[0]++;
		j=0;
		while(a[j]>2)
		{
			a[j]=0;
			j++;
			a[j]++;
		}
	}
	return 0;
} 