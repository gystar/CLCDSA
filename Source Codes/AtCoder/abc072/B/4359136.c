#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char s[100000];
	scanf("%s",s);
	for (int i = 0; i < strlen(s); i += 2){
		printf("%c",s[i]);
	}
	return 0;
} 