#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int N, T, i, a, old, out = 0;
	scanf("%d%d", &N, &T);
	for (i=0; i < N ;i++) {
		scanf("%d", &a);
		if (i != 0) {
			if (a-old < T) out += a-old;
			else out += T;
		}
		old = a;
	}
	out += T;
	printf("%d\n", out);
	return 0;
} 