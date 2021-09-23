#include <stdio.h>

int main(void){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%s\n", a < b ? "Better" : "Worse");
	return 0;
} 