#include <stdio.h>

int main(void){

	long long int A, B, C;

	scanf("%lld", &A);
	scanf("%lld", &B);
	scanf("%lld", &C);

	long long int min = 0;

	if(A%2 == 0 || B%2 == 0 || C%2 == 0){
		
		printf("%lld\n", min);
		return 0;
	
	}else if(A%2 != 0 && B%2 != 0 && C%2 != 0){
	
		long long int temp = 0;

		if(A > B){
			temp = A;
			A = B;
			B = temp;
		}
		
		if(B > C){
			temp = B;
			B = C;
			C = temp;
		}

	min = A * B;
	
	printf("%lld\n", min);

	}


	return 0;

} 