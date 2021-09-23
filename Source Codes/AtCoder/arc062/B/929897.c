#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int gp, i, len, score;
	char s[100010];
	scanf("%s", &s);
	len = strlen(s);

	gp = 1;
	score = 0;
	for (i=1;i<len;i++) {
		if (s[i] == 'g') {
			if (gp>0) { score++; gp--; }
			else { gp++; }
		} else {
			if (gp>0) { gp--; }
			else { score--; gp++; }
		}
	}

	printf("%d\n", score);
	return 0;
} 