#include <stdio.h>

int main(void) {
	long long int X, Y;
	scanf("%lld%lld", &X, &Y);
	if (-1 <= X - Y && X - Y <= 1) 
		printf("Brown\n");
	else 
		printf("Alice\n");
	return 0;
} 