#include <stdio.h>
#include <stdlib.h>

int main(void) {
	long long X, Y;
	scanf("%lld%lld", &X, &Y);
	if (X == 0 || Y == 0) {
		if (X > Y) {
			printf("%lld\n", llabs(Y - X) + 1);
		}
		else if (X < Y) {
			printf("%lld\n", llabs(Y - X));
		}
	}
	else if (X * Y > 0) {
		if (X < Y) {
			printf("%lld\n", Y - X);
		}
		else if (X > Y) {
			printf("%lld\n", X - Y + 2);
		}
	}
	else if (X * Y < 0) {
		printf("%lld\n", llabs(llabs(X) - llabs(Y)) + 1);
	}
	return 0;
} 