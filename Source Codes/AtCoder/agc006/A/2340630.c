#include<stdio.h>
int main()
{
	int n,i,j,k;
	char a[2][106];
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	scanf("%c",&a[0][i]);
	getchar();
	for(i=0;i<n;i++)
	scanf("%c",&a[1][i]);
	//puts(a[0]);
	//puts(a[1]);
	for(i=0;i<n;i++)
	{
		if(a[0][i]==a[1][0])
		{
			for(j=i,k=0;j<n;j++,k++)
			{
				if(a[0][j]!=a[1][k])
				{
					break;
					j--;
				}
			}
			if(j==n)
			{
				printf("%d\n",n+(n-k));
				return 0;
		    }
	    } 
    }
	if(i==n)
	printf("%d\n",n*2); 
	return 0;
} 