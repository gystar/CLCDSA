#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
#define sl(x) scanf("%ld", &x)
#define ss(x) scanf("%s", x)
#define pl(x) printf("%ld\n", x)
#define ps(x) printf("%s\n", x)
 
#define INF 100000000000
#define MOD 1000000007
 
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))

int compare_long(const void *a, const void *b) {
	return *(long*)a - *(long*)b;
}

int main() {
	long N;
	long i, j;
	long A[100010];
	long check[100010] = {0};
	long ans;
	long f = 0;
	
	sl(N);
	for(i=0;i<N;i++) {
		sl(A[i]);
		check[A[i]]++;
	}
	
	if(N % 2) {
		if(check[0] != 1) f = 1;
		for(i=2;i<N;i+=2) {
			if(check[i] != 2) f = 1;
		}
	} else {
		for(i=1;i<N;i+=2) {
			if(check[i] != 2) f = 1;
		}
	}
	
	if(f) {
		pl(0);
		return 0;
	}
	
	ans = 1;
	for(i=0;i<N/2;i++) {
		ans = (ans * 2) % MOD;
	}
	
	pl(ans);
	
	return 0;
} 