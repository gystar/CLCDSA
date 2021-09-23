#include <stdio.h>

int main(int argc, char* argv[]) {

	int n;
	scanf("%d", &n);
	long l[100];
	l[0] = 2;
	l[1] = 1;

	for(int i = 2; i <= n; i++) {
		l[i] = l[i-1] + l[i-2];
	}

	printf("%ld", l[n]);

	return 0;
} 