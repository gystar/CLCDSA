#include <stdio.h>

int main(void){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a <= b)
		a++;
	else
		b++;
	printf("%d\n", a * b);
	return 0;
} 