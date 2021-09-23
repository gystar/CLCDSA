#include <stdio.h>
#include <string.h>

int main(void) {
	int C1, C2, i, j, len;
	char S[100010];
	scanf("%s", &S);
	len = strlen(S);

	C1 = 0;
	j = len - 1;
	for (i=len-2;i>=0;i--) {
		if (S[i] != S[j]) {
			C1++;
			j = i;
		}
	}

	C2 = 0;
	j = 0;
	for (i=1;i<len;i++) {
		if (S[i] != S[j]) {
			C2++;
			j = i;
		}
	}
	printf("%d\n", (C1>C2)?C2:C1);
	return 0;
} 