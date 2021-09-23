#include <stdio.h>

int main(void)
{
	int zahyou = 0, x, i ;
	scanf("%d", &x);
	for(i = 0; zahyou < x ; i++) zahyou += i;
	printf("%d\n", i - 1);
	return 0;
} 