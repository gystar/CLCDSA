#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	char str[100];
	scanf("%s",str);
	printf("%c%d%c\n", str[0],strlen(str) - 2,str[strlen(str) - 1]);
	return 0;
} 