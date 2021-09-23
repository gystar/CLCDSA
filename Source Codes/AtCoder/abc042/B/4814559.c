#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long

int main(int argc, char const *argv[]){
	int n,l;
	char str[107][107],temp[107];
	scanf("%d%d\n",&n,&l);

	scanf(" %s",str[0]);
	for(int i = 1; i < n; ++i)
	{
		scanf(" %s",str[i]);
		for(int j = 0; j < i; ++j)
		{
			if(strcmp(str[i],str[j]) < 0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	for(int i = 0; i < n; ++i)	printf("%s",str[i]);
	return 0;
} 