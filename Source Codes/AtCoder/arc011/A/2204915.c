/*
AtCoder Regular Contest 011 A - ??????????? Ver1 ??:
*/

#include <stdio.h>

#define DEBUG1

int main() {

	int a, b, n;
	int y = 0;

	scanf("%d %d %d", &a, &b, &n);
	
	for (y=n; a<=n; y+=b) {
		n-=a-b;
	}

	printf("%d\n", y);

	//getch();
	return 0;
} 