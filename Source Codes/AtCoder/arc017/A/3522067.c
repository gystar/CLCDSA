#include<stdio.h>
	int main()
{
	int i,n,m;
	scanf("%d",&n);
	for(i=2;1;i++)
	{
		m=n%i;
		if(m==0)
		break;
	}
	if(i==n)
	printf("YES\n");
	else
	printf("NO\n");
	return 0;
	
	
} 