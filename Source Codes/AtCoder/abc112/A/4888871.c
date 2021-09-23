#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long
#define TBMod 1000000007

int main(int argc, char const *argv[])
{
	int n,a,b;
	scanf("%d",&n);
	if(n - 1 == 0){
		printf("Hello World\n");
	}
	else{
		scanf(" %d %d",&a,&b);
		printf("%d\n",a + b);
	}
	return 0;
} 