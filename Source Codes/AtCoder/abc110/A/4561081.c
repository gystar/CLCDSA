#include <stdio.h>

int max(int a, int b){return a > b ? a : b;}

int main(void){
	int a, b, c;
	int sum = 0;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", max(a * 10 + b + c, max(b * 10 + a + c, c * 10 + a + b)));
	return 0;
} 