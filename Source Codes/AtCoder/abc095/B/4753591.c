#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long 

// qsort(array, size, sizeof(int),comp);
int comp(const int *a,const int *b){
	return (*a - *b);
}

int main(int argc, char const *argv[]){
	int n,x;
	int *m,ans;
	scanf("%d%d",&n,&x);
	ans = n;
	m = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i){
		scanf(" %d",&m[i]);
		x -= m[i];
	}
	qsort(m,n,sizeof(int),comp);
	ans += (x / m[0]);
	printf("%d\n",ans);
	return 0;
} 