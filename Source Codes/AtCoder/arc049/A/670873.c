#include <stdio.h>
#include <string.h>

int main(void) {
	int a[4];
	char s[101];
	int i, j=0;
	int t;

	scanf("%s", &s);
	scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);

	t=strlen(s);

	for(i=0; i<t; i++) {
		if(i==a[j]) {
			printf("\"");
			j++;
		}
		printf("%c", s[i]);
	}
	if(a[j]==t) printf("\"");
	printf("\n");

	return 0;
} 