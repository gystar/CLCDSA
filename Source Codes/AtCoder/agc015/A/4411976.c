#include <stdio.h>

int main(void){

	long long int N, A, B;

	scanf("%lld", &N);
	scanf("%lld", &A);
	scanf("%lld", &B);

	long long int count = 0;

	if(B - A < 0){
		return !printf("%lld\n", count);
	}else{

		if(N == 1 && A < B){
			return !printf("%lld\n", count);
		}else if((N == 1 && A == B) || (N == 2 && A < B)){
			count = 1;
			return !printf("%lld\n", count);	
		}

		count = 0;

		count = B * (N - 2) - A * (N - 2) + 1;

		printf("%lld\n", count);

		return 0;

	}

} 