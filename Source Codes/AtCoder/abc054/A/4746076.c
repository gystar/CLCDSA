#include <stdio.h>

int main(void){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a == b)
		printf("Draw\n");
	else if(a == 1)
		printf("Alice\n");
	else if(b == 1)
		printf("Bob\n");
	else if(a < b)
		printf("Bob\n");
	else
		printf("Alice\n");
	return 0;
} 