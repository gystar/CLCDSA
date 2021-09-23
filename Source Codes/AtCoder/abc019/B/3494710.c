#include<stdio.h>
int main() {
	char s[1000];
	char check;
	int slen=0, len=0,i;
	scanf("%s", s);
	while (s[slen++]){ }
	slen--;
	for (i = 0; i < slen; i++) {
		check = s[i];
		while (s[i++] == check) { len++; }
		//printf("%d\n", len);
		printf("%c%d", check, len);
		len = 0;
		i-=2;
	}
	putchar('\n');
	return 0;
} 