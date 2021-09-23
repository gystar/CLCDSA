#include<stdio.h>

int main()
{
	int t,a,b,w;
    scanf("%d %d %d",&w,&a,&b);
	if(a>b)
	{
	t=a;
	a=b;
	b=t;
	}


    if(a+w>=b)
	printf("0");
	else
	printf("%d",b-(a+w));
		
//	int d,a,b,w;

//	d=abs(a-b);
//	printf("%d",d);
	return 0;
} 