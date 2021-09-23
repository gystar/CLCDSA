#include <stdio.h>

int main(void){
	int in;
	scanf("%d", &in);
	putchar('A');
	if(in < 1200)
		putchar('B');
	else
		putchar('R');
	printf("C\n");
	return 0;
} 