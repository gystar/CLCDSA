#include <stdio.h>

int main(void)
{
	int a,b,n;
	
	scanf("%d %d %d",&n,&a,&b);
	
	if(a*n>=b){
		printf("%d\n",b);
	}else{
		printf("%d\n",a*n);
	}
	
	return 0;
} 