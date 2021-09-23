#include <stdio.h>

int main(void){
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d\n", B % A ? B / A + 1 : B / A);
	return 0;
} 