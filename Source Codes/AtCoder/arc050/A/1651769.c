#include <stdio.h>

int main(){
	char C, c;
	scanf("%c %c", &C, &c);
/*	printf("%d\n", (int)C);
	printf("%d\n", (int)c);
	printf("%c\n", C);
	printf("%c\n", c);
*/	if((int)C + 32 == (int)c){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
} 