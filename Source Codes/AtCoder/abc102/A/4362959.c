#include <stdio.h>

int main(int argc, char const *argv[])
{
	long n;
	scanf("%ld",&n);
	if(n % 2)	printf("%ld\n", 2 * n);
	else printf("%ld\n", n);
	return 0;
} 