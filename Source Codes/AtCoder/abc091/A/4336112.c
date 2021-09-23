#include <stdio.h>

int main(void)
{
	int a,b,c;
	
	scanf("%d %d %d",&a,&b,&c);
	
	if(a+b<c){
		printf("No\n");
	}else{
		printf("Yes\n");
	}
	
	return 0;
} 