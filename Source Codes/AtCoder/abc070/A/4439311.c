#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	char n[3];
	scanf("%s",n);
	if(n[0] == n[2])	printf("Yes\n");
	else printf("No\n");
} 