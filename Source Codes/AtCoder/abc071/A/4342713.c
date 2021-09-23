#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x,a,b;
	
	scanf("%d %d %d",&x,&a,&b);
	
	if(abs(a-x)<abs(b-x)){
		printf("A\n");
	}else{
		printf("B\n");
	}
	
	return 0;
} 