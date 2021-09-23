#include <stdio.h>

int main()
{
	int r,c,d,in,ans = 0,dd,i = 0,j;
	scanf("%d%d%d",&r,&c,&d);
	dd = d % 2;
	for (; i < r; ++i)
	{
		j = 0;
		for (; j < c; ++j)
		{
			scanf("%d",&in);
			if((i+j)%2 == dd && i + j <= d)
			{
				ans = (ans>in?ans:in);
			}
		}
	}
	printf("%d\n",ans);
} 