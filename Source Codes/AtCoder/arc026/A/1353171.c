#include <stdio.h>


int main ()
{
	int n,a,b;
	scanf("%d %d %d",&n,&a,&b);
	int time;
	if(n<=5)
	{
		time = b*n;
	}
	else{
		time = 5*b+(n-5)*a;
	}
	printf("%d\n",time);
} 