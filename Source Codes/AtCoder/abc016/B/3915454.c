#include <stdio.h>

int main(){
	int a, b, c, f = 0;
	char out;
	scanf("%d %d %d", &a, &b, &c);
	if(c == a + b)f++;
	if(c == a - b)f += 2;
	if(f == 0)c = '!';
	if(f == 1)c = '+';
	if(f == 2)c = '-';
	if(f == 3)c = '?';
	printf("%c\n", c);
	return 0;
} 