#include<stdio.h>
int main() {
	char str[100],tmp[100];
	int n, i, j,k, n1, n2;
	scanf("%s", str);
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &n1, &n2);
		for (j = n1 - 1; j <= n2 - 1; j++) {
			tmp[j] = str[j];
		}
		j = n1 - 1;
		for (k = n2 - 1; k >= n1-1; k--) {
			str[j] = tmp[k];
			j++;
		}
	}
	printf("%s\n", str);
	return 0;
} 