#include <stdio.h>

int main(void){
	char s[101];
	scanf("%s", s);
	int x = 0;
	for (int i = 0; s[i]; i++) {
		if (s[i] == "ICT"[x] || s[i] == "ict"[x]) {
			x++;
		}
		if (x == 3) {
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
} 