#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long

int main(int argc, char const *argv[]){
	int n,m,*a,*b;
	int cnt[57] = { 0 };
	scanf("%d%d",&n,&m);
	a = (int *)malloc(sizeof(int) * m);
	b = (int *)malloc(sizeof(int) * m);	
	for (int i = 0; i < m; ++i)	scanf(" %d%d",&a[i],&b[i]);
	for (int i = 0; i < m; ++i)	++cnt[a[i]];
	for (int i = 0; i < m; ++i)	++cnt[b[i]];
	for (int i = 1; i <= n; ++i)	printf("%d\n",cnt[i]);	
	return 0;
} 