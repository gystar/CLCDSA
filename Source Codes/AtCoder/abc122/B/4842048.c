#include <stdio.h>

int main(void) {
	char s[11];
	int i, max = 0, count = 0;

	scanf("%s", s);

	i = 0;
	while(1) {
		switch(s[i]) {
			case 'A':
			case 'C':
			case 'G':
			case 'T':
				++count;
				break;
			default:
				max = (count < max) ? max : count;
				count = 0;
				break;
		}
		if(s[i] == '\0')	break;
		else	++i;
	}

	printf("%d\n", max);

	return 0;
} 