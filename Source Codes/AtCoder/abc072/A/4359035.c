#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x,t;
	scanf("%d%d",&x,&t);
	if(x <= t)	printf("0\n");
	else printf("%d\n", x - t);
	return 0;
} 