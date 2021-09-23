#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(!(a % 3) || !(b % 3) || !((a + b) % 3))	printf("Possible\n");
	else printf("Impossible");
	return 0;
} 