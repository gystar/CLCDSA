#include <stdio.h>

int main(void)
{
	int n=0;
	int x;
	
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		x=x+i;
	}
	
	printf("%d\n",x);
	
	return 0;
} 