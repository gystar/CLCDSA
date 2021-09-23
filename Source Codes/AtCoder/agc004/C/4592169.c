#include <stdio.h>

int main()
{
	int h, w;
	char mp[505][505];

	scanf("%d %d", &h, &w);
	for (int i = 0; i < h; i++) {
		scanf("%s", mp[i]);
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if ((!(i & 1) || j == 0 || mp[i][j] == '#') && j != w - 1) {
				putchar('#');
			} else {
				putchar('.');
			}
		}
		putchar('\n');
	}

	putchar('\n');

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if ((i & 1 || j == w - 1 || mp[i][j] == '#') && j != 0) {
				putchar('#');
			} else {
				putchar('.');
			}
		}
		putchar('\n');
	}

	return 0;
} 