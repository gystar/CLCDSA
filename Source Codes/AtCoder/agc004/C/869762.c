#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i, j, H, W;
	char a[510][510], b[510][510], r[510][510];
	scanf("%d%d", &H, &W);
	for (i=0;i<H;i++) scanf("%s", &a[i]);

	for (i=0;i<H;i++) {
		r[i][0] = '#';
		for (j=1;j<W-1;j++) {
			if (i%2 == 0) r[i][j] = '#';
			else if (a[i][j] == '#') r[i][j] = '#';
			else r[i][j] = '.';
		}
		r[i][W-1] = '.';
		r[i][W] = '\0';
	}
	for (i=0;i<H;i++) {
		b[i][0] = '.';
		for (j=1;j<W-1;j++) {
			if (i%2 == 1) b[i][j] = '#';
			else if (a[i][j] == '#') b[i][j] = '#';
			else b[i][j] = '.';
		}
		b[i][W-1] = '#';
		b[i][W] = '\0';
	}

	for (i=0;i<H;i++) printf("%s\n", r[i]);
	printf("\n");
	for (i=0;i<H;i++) printf("%s\n", b[i]);

	return 0;
} 