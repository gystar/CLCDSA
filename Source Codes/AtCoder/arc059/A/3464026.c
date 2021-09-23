#include<stdio.h>
main()
{
	long long n, i, a[110], x, y, j, s, p;
	scanf("%lld", &n);
	for (i=0, x=-110, y=110; i<n; i++)
	{
		scanf("%lld", &a[i]);
		if (a[i]>x)
		{
			x=a[i];
		}
		if (a[i]<y)
		{
			y=a[i];
		}
	}
	for (i=y, p=100000000000000000; i<=x; i++)
	{
		for (j=0, s=0; j<n; j++)
		{
			s+=(a[j]-i)*(a[j]-i);
		}
		if (s<p)
		{
			p=s;
		}
	}
	printf("%lld\n", p);
	return 0;
} ./Main.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main()
 ^
