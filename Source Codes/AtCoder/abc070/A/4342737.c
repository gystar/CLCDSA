#include <stdio.h>

int main(void)

{
	char n[100];
	
	scanf("%s",n);
	
	if(n[0]==n[2]){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	
	return 0;
} 