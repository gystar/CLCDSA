#include <stdio.h>

int main(){
	int N, A, B;
	scanf("%d%d%d", &N, &A, &B);
	if((N - 1) % (A + B) < A){
		printf("Ant\n");
	}
	else{
		printf("Bug\n");
	}
	return 0;
} 