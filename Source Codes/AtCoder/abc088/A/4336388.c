#include <stdio.h>

int main(void)
{
	int a,n;
	scanf("%d\n%d",&n,&a);
	
	if(n%500-a<=0){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	
	return 0;
} 