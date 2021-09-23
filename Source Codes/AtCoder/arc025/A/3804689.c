#include <stdio.h>

int max(int a, int b)
{
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

int main()
{
	int d[7];
	int j[7];
	int a, b, sum = 0;
	for (a = 0; a < 7; a++) {
		scanf("%d", &d[a]);
	}
	for (a = 0; a < 7; a++) {
		scanf("%d", &j[a]);
	}
	for (a = 0; a < 7; a++) {
		sum += max(d[a], j[a]);
	}
	printf("%d\n", sum);
	return 0;
} 