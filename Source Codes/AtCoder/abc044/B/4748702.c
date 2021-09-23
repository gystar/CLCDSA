#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long 

int main(int argc, char const *argv[]){
	int cnt[257] = { 0 };
	char str[100];
	scanf("%s",str);
	for (int i = 0; i < strlen(str); ++i)	++cnt[(int)str[i]];
	for (int i = 0; i < 255; ++i)
	{
		if(cnt[i] % 2){
			puts("No");
			return 0;
		}
	}
	puts("Yes");
	return 0;
} 