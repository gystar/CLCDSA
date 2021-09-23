#include <stdio.h>

int main(void)
{
	int n,k;
	scanf("%d %d",&n,&k);
	
	if(n%k!=0){
		printf("1\n");
	}else{
		printf("0\n");
	}
	
	return 0;
} 