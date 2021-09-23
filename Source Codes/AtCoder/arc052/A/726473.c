#include <stdio.h>

main() {
	char a[20];
	int i = 0;
	int j = 0;
	scanf("%s", &a);

	while (a[i] != '\0') {
		if (a[i] >= '0' && a[i] <= '9') {
			printf("%c", a[i]);
			if (a[i + 1] >= '0' && a[i + 1] <= '9') {
				printf("%c\n", a[i + 1]);
				break;
			}
			else {
				printf("\n");
				break;
			}
		}
		i++;
	}
} ./Main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main() {
 ^
