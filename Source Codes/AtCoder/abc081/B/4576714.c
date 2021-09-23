#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, answer = -1, sw = 0, divider = 1;
	int *s;
	scanf("%d", &n);
	s = (int *)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++) {
		scanf("%d", s + i);
	}
	do{
		answer++;
		divider = divider * 2;
		for (int i = 0; i < n; i++) {
			if (s[i] % divider != 0) {
				sw = 1;
				break;
			}
		}
	} while (sw == 0);
	printf("%d\n", answer);
	return 0;
} 