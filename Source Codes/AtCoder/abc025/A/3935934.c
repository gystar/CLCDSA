#include <stdio.h>

int main(){
	char like[10];
	int n;
	scanf("%s", like);
	scanf("%d", &n);
	n--;
	printf("%c%c\n", like[n / 5], like[n % 5]);
	return 0;
} 