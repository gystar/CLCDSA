#include <stdio.h>

int main(void)
{
	char no[100];
	
	scanf("%s",no);
	
	if(no[0]!='9'&&no[1]!='9'){
		printf("No\n");
	}else{
		printf("Yes\n");
	}
	
	return 0;
	
} 