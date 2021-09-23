#include <stdio.h>
#include <math.h>

int max(int a, int b) {
	if (a >= b) { return a; }
	else { return b; }
}

int main() {

	int x1, y1, r, x2, y2, x3, y3;

	scanf("%d %d %d", &x1, &y1, &r);
	scanf("%d %d %d %d", &x2, &y2, &x3, &y3);

	int red = 0;

	if (x1 + r > x3 || x1 - r<x2 || y1 + r>y3 || y1 - r < y2) { red = 1; }

	if (red == 1) { printf("YES\n"); }
	else { printf("NO\n"); }

	int dx = max(abs(x2 - x1), abs(x3 - x1));
	int dy = max(abs(y2 - y1), abs(y3 - y1));

	int blue = 0;

	if (dx*dx + dy*dy > r*r) { blue = 1; }

	if (blue == 1) { printf("YES\n"); }
	else { printf("NO\n"); }

	return 0;
} 