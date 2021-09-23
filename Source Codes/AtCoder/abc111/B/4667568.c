#include<stdio.h>
int main(void) {
	int a;
	int i;
	scanf("%d", &a);
	for (i = 1; i < 10; i++) {
		if (i * 111 >= a)
			break;
	}
	printf("%d", i * 111);
} 