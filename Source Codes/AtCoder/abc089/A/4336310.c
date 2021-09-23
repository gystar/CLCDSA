#include <stdio.h>

int main(void)
{
	int n,x;
	scanf("%d",&n);
	if(n%3==0){
		x=n/3;
	}else{
		x=(n-(n%3))/3;
	}
	
	printf("%d\n",x);
	
	return 0;
} 