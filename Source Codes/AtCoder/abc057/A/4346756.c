#include <stdio.h>

int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	if(a+b<24){
		printf("%d\n",a+b);
	}else if(a+b>=24){
		printf("%d\n",a+b-24);
	}
	
	return 0;
} 