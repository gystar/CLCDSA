#include <stdio.h>

int main()
{
	char s[9];
	scanf("%s", s);
	int i;
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == 'O') {
			s[i] = '0';
		} else if (s[i] == 'D') {
			s[i] = '0';
		} else if (s[i] == 'I') {
			s[i] = '1';
		} else if (s[i] == 'Z') {
			s[i] = '2';
		} else if (s[i] == 'S') {
			s[i] = '5';
		} else if (s[i] == 'B') {
			s[i] = '8';
		}
	}
	printf("%s\n", s);
	return 0;
} 