#include <stdio.h>

int main(void) {
	int a, b, c, x, answer = 0;
	scanf("%d\n%d\n%d\n%d", &a, &b, &c, &x);
	
	for (int i = 0; i <= a; i++) {
		for (int j = 0; j <= b; j++) {
			for (int k = 0; k <= c; k++) {
				if (500 * i + 100 * j + 50 * k == x) {
					answer++;
				}
			}
		}
	}

	printf("%d\n", answer);
	return 0;
} 