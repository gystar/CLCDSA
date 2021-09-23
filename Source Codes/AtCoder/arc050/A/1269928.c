#include <stdio.h>

int main(void)
{
	char c,C;
	scanf("%c %c",&C,&c);
	
	C=C+32;
	
	if(C==c){
		printf("Yes\n");
	} else{
		printf("No\n");
	}
	return 0;
} 