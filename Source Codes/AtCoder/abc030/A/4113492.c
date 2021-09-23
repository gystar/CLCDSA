#include <stdio.h>

int main(void){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if(b * c > a * d)
		printf("TAKAHASHI\n");
	else if(b * c < a * d)
		printf("AOKI\n");
	else
		printf("DRAW\n");
	return 0;
} 