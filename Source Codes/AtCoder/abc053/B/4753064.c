#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long 

int main(int argc, char const *argv[]){
	int pa,pz;
	char str[200007];
	scanf("%s",str);
	for (pa = 0; pa < strlen(str); ++pa)
	{
		if(str[pa] == 'A')	break;
	}
	for (pz = strlen(str) - 1; pz >= 0; pz--)
	{
		if(str[pz] == 'Z')	break;
	}
	printf("%d\n", pz - pa + 1);	
	return 0;
} 