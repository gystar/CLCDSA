#include <stdio.h>

int main()
{
	int n;
	int dat;
	int odd = 0, even = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &dat);

		if (dat & 1) {
			odd++;
		} else {
			even++;
		}
	}

	if (odd & 1) {
		puts("NO");
	} else {
		puts("YES");
	}

	return 0;
} 