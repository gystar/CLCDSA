#include <stdio.h>

int main(void)
{
	int x,t;
	
	scanf("%d %d",&x,&t);
	
	if(x-t<=0){
		printf("0\n");
	}else{
		printf("%d\n",x-t);
	}
	
	return 0;
} 