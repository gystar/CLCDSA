#include <stdio.h>

int main(void)
{
	char a,b;
	
	scanf("%c %c",&a,&b);
	
	if(a!=b){
		printf("D\n");
	}else{
		printf("H\n");
	}
	
	return 0;
} 