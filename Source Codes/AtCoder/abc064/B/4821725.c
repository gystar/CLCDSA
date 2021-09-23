#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long
#define TBMod 1000000007

// qsort(array, size, sizeof(int),comp);
int comp(const int *a,const int *b){
	return (*a - *b);
}

int main(int argc, char const *argv[])
{
	int n,*a;
	scanf("%d",&n);
	a = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i)	scanf(" %d",&a[i]);
	qsort(a,n,sizeof(int),comp);
	printf("%d\n", a[n - 1] - a[0]);
	return 0;
} 