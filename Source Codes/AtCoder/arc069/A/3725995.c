#include <stdio.h>
main()
{
	long long int s,c;
	scanf("%lld %lld",&s,&c);
	if(s*2>=c)
	{
		printf("%lld",c/2);
		return 0;
	}
	else
	{
		c=c-s*2;
		c=c/4;
		printf("%lld",c+s);
		return 0;
	}
	return 0; 
} ./Main.c:2:1: warning: return type defaults to �int� [-Wimplicit-int]
 main()
 ^
