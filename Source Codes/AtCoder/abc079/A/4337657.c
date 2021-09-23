#include <stdio.h>

int main(void)
{
	char n[100];
	
	scanf("%s",n);
	
	if(n[1]==n[2]){
		if(n[1]==n[0]||n[2]==n[3]){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}else{
		printf("No\n");
	}
	
	return 0;
} 