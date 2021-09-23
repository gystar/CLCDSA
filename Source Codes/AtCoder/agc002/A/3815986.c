#include<stdio.h>

int main() {

	int a, b, i = 0;

	scanf("%d", &a);
	scanf("%d", &b);

	if (a > 0) {
		if (b < 0) {
			printf("Zero");
		}
		else {//a?b????????
			printf("Positive");
		}
	}
	else if (a < 0) {
		if (b > 0) {
			printf("Zero");
		}
		else if ((a - b) % 2 == 0) {
			printf("Negative");
		}
		else {
			printf("Positive");
		}
	}

	return 0;
} 