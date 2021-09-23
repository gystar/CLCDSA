#include <stdio.h>

int main()
{
	int A, D;
	scanf("%d%d", &A, &D);
	int a, d, o;
	a = (A+1)*D;
	d = A*(D+1);
	if (d > a) {
		printf("%d\n", d);
	} else {
		printf("%d\n", a);
	}
	return 0;
} 