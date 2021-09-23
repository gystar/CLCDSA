#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, a, b;
	
	scanf("%d %d %d", &n, &a, &b);
	if (n == 2)
		printf("Borys\n");
	else if (abs(a - b) % 2 == 0)
		printf("Alice\n");
	else
		printf("Borys\n");
	
	return 0;
} 