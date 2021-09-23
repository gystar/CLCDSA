#include <stdio.h>

int main(void){
	char str[105];
	int i;
	scanf("%s", str);
	scanf("%d", &i);
	printf("%c\n", str[i - 1]);
	return 0;
} 