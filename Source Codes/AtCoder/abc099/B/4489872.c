#include <stdio.h>

int main(void)
{
	int a,b,x;
	int sum=0;
	
	scanf("%d%d",&a,&b);
	
	x=b-a;
	
	for(int i=0;i<=x;i++){
		sum=sum+i;
	}
	
	printf("%d\n",sum-b);
	
	return 0;
} 