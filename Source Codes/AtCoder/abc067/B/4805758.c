#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long

// qsort(array, size, sizeof(int),comp);
int comp(const int *a,const int *b){
	return (*b - *a);
}

int main(int argc, char const *argv[]){
	int n,k,*l;
	int ans = 0;
	scanf("%d%d",&n,&k);
	l = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i)	scanf(" %d",&l[i]);
	qsort(l,n,sizeof(int),comp);
	for (int i = 0; i < k; ++i)	ans += l[i];
	printf("%d\n",ans);	
} 