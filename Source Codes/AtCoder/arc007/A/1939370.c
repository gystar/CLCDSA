/*
AtCoder Regular Contest 007
A - ?????????????
Ver1
??:
*/

#include<stdio.h>
#include<string.h>

//#define DEBUG1

int main() {
	char x;
	char s[51];

	scanf("%c %s", &x, s);

	for (int i = 0; i < strlen(s); i++) {
		if (s[i] != x) {printf("%c", s[i]); }
	}
	printf("\n");
#ifdef DEBUG1
	getch();
#endif
	return 0;
} 