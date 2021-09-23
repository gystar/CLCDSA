#include <stdio.h>
 
int main(){
	int i, N, M;
	int long long kaijo = 1, s;

 
	scanf("%d %d", &N, &M);
 

	s = 1000000007;
	if(N == M - 1 || N == M + 1) {
		for (i = 1; i <= N; i++) {
			kaijo *= i;
			if(kaijo >= s) {
				kaijo %= s;
			}
  		}

		for (i = 1; i <= M; i++) {
			kaijo *= i;
			if(kaijo >= s) {
				kaijo %= s;
			}
  		}

		if(kaijo >= s) {
			kaijo %= s;
		}

		printf("%lld", kaijo);
	}

	else if(N == M) {
		for (i = 1; i <= N; i++) {
			kaijo *= i;
			if(kaijo >= s) {
				kaijo %= s;
			}
  		}

		for (i = 1; i <= M; i++) {
			kaijo *= i;
			if(kaijo >= s) {
				kaijo %= s;
			}
  		}
		kaijo *= 2;

		if(kaijo >= s) {
			kaijo %= s;
		}

		printf("%lld", kaijo);
	}

	else {
		printf("0");
	}
 
} 