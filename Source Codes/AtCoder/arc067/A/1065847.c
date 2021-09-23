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
 
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

int main() {
	long N;
	long i, j;
	long table[1001] = {0};
	long ans = 1;
	long tmp;
	
	sl(N);
	
	if(N == 1) {
		pl(1);
		return 0;
	}
	
	for(i=2;i<=N;i++) {
		tmp = i;
		for(j=2;j<=i;j++) {
			if(tmp < j) break;
			while(tmp % j == 0) {
				table[j]++;
				tmp /= j;
			}
		}
	}
	
	for(i=2;i<=N;i++) {
		ans *= (table[i] + 1);
		ans %= MOD;
	}
	
	pl(ans);
	
	return 0;
} 