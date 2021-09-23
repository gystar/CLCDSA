#include <stdio.h>
int main()
{
	int a,b,c,ans=1;
	scanf("%d%d%d", &a, &b, &c);
	if(a!=b)ans++;
	if(c!=a && c!=b)ans++;
	printf("%d\n", ans);
	return 0;
} 