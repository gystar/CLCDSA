#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	int x,t;
	scanf("%d%d",&x,&t);
	printf("%d\n", (x <= t) ? 0 : (x - t));
	return 0;
} 