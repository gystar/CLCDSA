#include <stdio.h>

int main()
{
	int a[3];
	scanf("%d%d%d", &a[0], &a[1], &a[2]);
	int max, min;
	int i;
	max = a[0];
	for (i = 1; i < 3; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	min = a[0];
	for (i = 1; i < 3; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	for (i = 0; i < 3; i++) {
		if (a[i] == max) {
			printf("1\n");
		} else if (a[i] == min) {
			printf("3\n");
		} else {
			printf("2\n");
		}
	}
	return 0;
} 