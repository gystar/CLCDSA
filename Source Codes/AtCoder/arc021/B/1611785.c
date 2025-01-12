#include <stdio.h>
#include <stdlib.h>

int main(){
	int L, i, xor = 0;
	scanf("%d", &L);
	int *B = (int *)malloc(sizeof(int) * L);
	int *A = (int *)malloc(sizeof(int) * L);
	for(i = 0; i < L; i++){
		scanf("%d", &B[i]);
		xor ^= B[i];
		A[i] = 0;
	}
	if(xor != 0){
		printf("-1\n");
		return 0;
	}
	for(i = 1; i < L; i++){
		A[i] = A[i - 1] ^ B[i - 1];
	}
	for(i = 0; i < L; i++){
		printf("%d\n", A[i]);
	}
	return 0;
} 