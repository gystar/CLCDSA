#include<stdio.h>
int main(void) {
	long a, b;
	scanf("%ld%ld", &b, &a);
	if (a * b < 0) {
              printf("%ld\n", a - b - 1);
		}
	else {			
              printf("%ld\n", (a - b < 0) ? (b - a) : (a - b));
		}
		return 0;
} 