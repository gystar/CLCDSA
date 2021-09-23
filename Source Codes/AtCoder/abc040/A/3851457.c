#include <stdio.h>

int main()
{
	int n, x;
	scanf("%d%d", &n, &x);
	if (n % 2 == 0) {
		if (n / 2 >= x) {
			printf("%d\n", x - 1);
		} else {
			printf("%d\n", n -x );
		}
	} else {
		if (n / 2 +1 > x) {
			printf("%d\n", x -1);
		} else {
			printf("%d\n", n -x);
		}
	}
	return 0;
} 