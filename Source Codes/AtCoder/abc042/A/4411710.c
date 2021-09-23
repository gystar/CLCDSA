#include<stdio.h>
 
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b+c==17 && a*b+b*c+c*a==95 && a*b*c==175)
		printf("YES");
	else printf("NO");
	return 0;
} 