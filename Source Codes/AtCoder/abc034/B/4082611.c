#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	if(n % 2)  printf("%d", ++n);
	else printf("%d\n", --n);
	return 0;
} 