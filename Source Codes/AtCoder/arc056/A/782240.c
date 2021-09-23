#include <stdio.h>

int main(void)
{
	long a, b, k, l;
	long set, over;
	
	scanf("%ld %ld %ld %ld", &a, &b, &k, &l);
	
	over = (k / l + 1) * b;
	if (a * l > b) set = ((k / l) * b) + ((k % l) * a);
	else set = a * k;
	
	if (over < set) printf("%ld\n", over);
	else printf("%ld\n", set);
	
	return (0);
} 