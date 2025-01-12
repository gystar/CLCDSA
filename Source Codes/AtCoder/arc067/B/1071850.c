#include <stdio.h>
#include <stdlib.h>

#define N 100000

typedef long long int int64;

int max(int64 x, int64 y){
	if(x >= y) return x;
	return y;
}

int min(int64 x, int64 y){
	if(x <= y) return x;
	return y;
}

int main(void){
	int64 n, a, b;
	int64 x[N], sum=0;
	int i;

	scanf("%lld %lld %lld", &n ,&a, &b);
	for(i=0; i<n; i++){
		scanf("%lld", &x[i]);
	}

	for(i=0; i<n-1; i++){
		sum += min((x[i+1]-x[i])*a, b);
	}

	printf("%lld\n", sum);

	return 0;
} 