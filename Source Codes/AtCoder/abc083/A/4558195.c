#include<stdio.h>

int main(){

	int  A, B, C, D, E, F;

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);

	E = A + B;
	F = C + D;

	if (E > F) {
		printf("Left");
	}
	if (F > E) {
		printf("Right");
	}
	if (E == F) {
		printf("Balanced");
	}

	return 0;
} 