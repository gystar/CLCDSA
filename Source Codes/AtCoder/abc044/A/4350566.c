#include <stdio.h>

int main(void)
{
	int n,k,x,y;
	
	scanf("%d\n%d\n%d\n%d",&n,&k,&x,&y);
	
	if(n<=k){
		printf("%d\n",n*x);
	}else{
		printf("%d\n",k*x+(n-k)*y);
	}
	
	return 0;
} 