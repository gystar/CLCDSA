#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b){
	return *(long*)a > *(long*)b;
}

long gcd(long a, long b){
	if(a % b == 0)return b;
	return gcd(b, a % b);
}

long absl(long in){
	if(in < 0)return -in;
	return in;
}

int main(void){
	long n, x, in, res;
	scanf("%ld %ld", &n, &x);
	for(int i = 0; i < n; i++){
		scanf("%ld", &in);
		if(i == 0)res = absl(in - x);
		res = gcd(res, absl(in - x));
	}
	printf("%d\n", res);
	return 0;
} 