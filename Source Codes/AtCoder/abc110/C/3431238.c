#include<stdio.h>
#include<string.h>

#define MYSTRINGMAX 200000 // ??20????
#define SIZE MYSTRINGMAX + 2 // MYSTRINGMAX+2????SIZE??????????? SIZE = 200002

int main(void) {
	char s[SIZE], t[SIZE];

	fgets(s, SIZE, stdin);
	fgets(t, SIZE, stdin);

	int length = strlen(s); // length??????????strlen?????s??????
	
	for (int i = 0; i < length; i++) {
		if (s[i] != t[i]) {
			char c1 = s[i];
			int j;
			for (j = 0; j < i; j++) { // ???????????????????"No"
				if (s[j] == t[i] || s[j] == c1) {
					printf("No\n");
					return 0;
				}
			}
			for (; j < length; j++) {
				if (s[j] == c1) {
					s[j] = t[i];
				}
				else if (s[j] == t[i]) {
					s[j] = c1; 
				}
			}
		}
	}
	printf("Yes\n"); // ??????Yes???
	return 0;
} 