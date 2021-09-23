#include <stdio.h>

int main(void)
{
	int a,b,ave;
	
	scanf("%d %d",&a,&b);
	
	if((a+b)%2==0){
		
		ave=(a+b)/2;
		
	}else{
		
		ave=(a+b+1)/2;
		
	}
	
	printf("%d\n",ave);
	
	return 0;
} 