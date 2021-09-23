#include <stdio.h>

int main(void){
	char s[200][10];
	int n, i, j, x = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%s", s[i]);

	for (i = 0; i < n; i++) {
		for (j = 0; j < 9; j++) {
			char rev = (i ? s[i - 1][j] : '.');
			if (s[i][j] == 'x' || (s[i][j] =='o' && rev != 'o')) x++;
		}
	}

	printf("%d\n", x);
	return 0;
} 