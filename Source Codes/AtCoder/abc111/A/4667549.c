#include<stdio.h>
int main(void) {
	char a[4];
	int i;
	gets(a);
	for (i = 0; i < 3; i++) {
		if (a[i] == '1')
			printf("9");
		else
			printf("1");
	}
} 