#include <stdio.h>
#include <string.h>

int main(void)
{
	char tmp[7];
	int N, len, i, j = 0, k;
	scanf("%d", &N);
	for (i = 1; j < N; ++i) {
		sprintf(tmp, "%d", i);
		len = strlen(tmp);
		for (k = 1; k < len; ++k) {
			if (tmp[k - 1] != tmp[k]) break;
		}
		if (k == len) ++j;
	}
	printf("%d\n", i - 1);
	return 0;
} 