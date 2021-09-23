#include <stdio.h>

int main(void) {
	int a, b, c, x, total, answer = 0;
	scanf("%d\n%d\n%d\n%d", &a, &b, &c, &x);
	
	for (int i = 0; i <= a; i++) {
		if (500 * i > x) { 
			break; 
		}
		for (int j = 0; j <= b; j++) {
			if (500 * i + 100 * j > x) {
				break;
			}
			for (int k = 0; k <= c; k++) {
				total = 500 * i + 100 * j + 50 * k;
				if (total == x) {
					answer++;
				}
				else if (total > x) {
					break;
				}
			}
		}
	}

	printf("%d\n", answer);
	return 0;
} 