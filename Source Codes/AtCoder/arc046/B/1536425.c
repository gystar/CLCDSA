#include <stdio.h>

int main(){
	int N, A, B;
	scanf("%d%d%d", &N, &A, &B);
	if(A > B || A >= N){
		printf("Takahashi\n");
	}
	else if(A < B){
		printf("Aoki\n");
	}
	else if(N % (A + 1) == 0){
		printf("Aoki\n");
	}
	else{
		printf("Takahashi\n");
	}
	return 0;
} 