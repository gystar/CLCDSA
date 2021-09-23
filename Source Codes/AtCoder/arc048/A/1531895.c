#include <stdio.h>

int main(){
	int A, B;
	scanf("%d%d", &A, &B);
	if(A < 0 && 0 < B){
		printf("%d\n", B - A - 1);
	}
	else{
		printf("%d\n", B - A);
	}
	return 0;
} 