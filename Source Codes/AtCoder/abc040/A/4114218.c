#include <stdio.h>

#define min(a, b) ((a) > (b) ? (b) : (a))

int main(void){
	int n, x;
	scanf("%d %d", &n, &x);
	printf("%d\n", min(x - 1, n - x));
	return 0;
} 